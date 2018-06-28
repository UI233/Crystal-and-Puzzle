## 游玩界面的实现
----
### 素材处理与加载
我们事先处理好了所有的图像与音频素材，并将其保存到了img.qrc与audio.qrc所对应的两个qt资源库中。在游玩界面的显示中，由于棋盘上的宝石需要根据游戏的进行不断地进行重绘，此处我们使用QPixmap类来对素材进行初始化加载。以下是Qt Documentation中对于QPixmap类的简介：
> The QPixmap class is an off-screen image representation that can be used as a paint device. Qt provides four classes for handling image data: QImage, QPixmap, QBitmap and QPicture. QImage is designed and optimized for I/O, and for direct pixel access and manipulation, while QPixmap is designed and optimized for showing images on screen. QBitmap is only a convenience class that inherits QPixmap, ensuring a depth of 1. The isQBitmap() function returns true if a QPixmap object is really a bitmap, otherwise returns false. Finally, the QPicture class is a paint device that records and replays QPainter commands.

代码实现如下：
```cpp
bool gamePad::LoadMaterials()
{
    char filename[50] = "";
    QPixmap p(crystalWidth, crystalWidth);//创建临时变量
    p.fill(Qt::transparent);//第0张素材应为透明，表示该位置无宝石
    crystalPix.push_back(p);//crystalPix为vector容器，将第一个透明QPixmap插入
    for (int i = 1; i <= 6; i++)
    {
        sprintf(filename, ":/Resources/Resources/%d.png", i);//文件名字符串处理
        QPixmap pic(filename);
        if (pic.isNull())
        {
            qDebug("Can't load file %s",filename);
            return false;
        }
        crystalPix.push_back(pic.copy(0, 0, 100, 100).scaled(crystalWidth, crystalWidth));//将图片拷贝（深拷贝）并缩放到相应尺寸
    }
    displayBg = new QPixmap(":/Resources/Resources/display_background");//棋盘背景图片的初始化
    crystalPixSelected.push_back(p);//crystalPixSelected中的是有选中特效的宝石图标
    for (int i = 1; i <= 6; i++)
    {
        sprintf(filename, ":/Resources/Resources/%d-1.png", i);
        QPixmap pic(filename);
        if (pic.isNull())
        {
            qDebug("Can't load file %s",filename);
            return false;
        }
        crystalPixSelected.push_back(pic.copy(0, 0, 100, 100).scaled(crystalWidth, crystalWidth));
    }
    return true;
}
```

### 地图的绘制
由两个函数组成，一个将所有QPixmap类保存的元素按当前状况绘制到一个统一的QPixmap上，一个是将该QPixmap放在UI界面中加载的一个重写后的QLabel子类Display标签框架中显示。以下是Qt documentation中对于QLabel类的介绍。
> QLabel is used for displaying text or an image. No user interaction functionality is provided. The visual appearance of the label can be configured in various ways, and it can be used for specifying a focus mnemonic key for another widget.

代码中的Display.h与Display.cpp是关于Display类的文件，主要是对鼠标事件的重写，此处不做赘述。

代码实现如下：
```cpp
void gamePad::DrawCrystals()
{
    QPainter painter(pix);
    painter.drawPixmap(0, 0, *displayBg);
    for (int c = 0; c < 5; c++)
        for (int r = 0; r < 7; r++)
            if (nowr != r || nowc != c)
                painter.drawPixmap(c * crystalWidth, r * crystalWidth, crystalPix[crystalMap[r][c]]);
    if (nowr != -1)//对当前选中宝石特殊处理
        painter.drawPixmap(nowc * crystalWidth, nowr * crystalWidth, crystalPixSelected[crystalMap[nowr][nowc]]);
    qDebug("okay!!");
}
void gamePad::ShowCrystals()
{
    display->showPix(pix);
}
```

## 游戏逻辑的实现
### 游戏地图的生成
游戏地图生成基本上基于随机生成的思路，以系统时间为随机种子生成，遵循相邻宝石颜色不同的原则；值得注意的是，宝石种类数会随着游戏难度进行调整，且该函数可以补全消除后残缺的地图。代码实现如下：
```cpp
void gamePad::SetRandomMap()
{
    auto chk = [this](int x, int y, int val) {//lambda表达式，一个判断相邻是否重复的函数
        if (x > 0 && crystalMap[x - 1][y] == val)
            return false;
        if (x < Height - 1 && crystalMap[x + 1][y] == val)
            return false;
        if (y > 0 && crystalMap[x][y - 1] == val)
            return false;
        if (y < Width - 1 && crystalMap[x][y + 1] == val)
            return false;
        return true;
    };
    for (int c = 0; c < Width; c++)
        for (int r = 0; r < Height; r++)
            if (crystalMap[r][c] == 0)
            {
                int val = (rand() % crystalType) + 1;//随机生成
                while (!chk(r, c, val))
                    val = (rand() % crystalType) + 1;
                crystalMap[r][c] = val;
                qDebug("Position:%d %d Color:%d", r, c, val);
            }
}
```
### 鼠标点击、拖动、松开等动作与游戏逻辑的实现
鼠标按键按下后，视为选中当前位置的宝石开始进行拖动
```cpp
void gamePad::display_clicked(int r, int c)
{
    if (checking || timeout)//若正在检查得分或超时则屏蔽
        return;
    cntMove = 0;
    nowr = r / crystalWidth;
    nowc = c / crystalWidth;//坐标转换，设定选中坐标
    if (crystalMap[nowr][nowc] == 0)//选中空块
        nowr = nowc = -1;
    this->DrawCrystals();
    this->ShowCrystals();//重绘地图，主要是为了选中效果
}
```
鼠标拖动时，对其位置进行判断，若达到交换条件（相邻）便进行交换；值得注意的是，超过规则允许的交换次数时，移动停止，直接进行得分检查。
```cpp
void gamePad::display_moved(int r, int c)
{
    if (checking || timeout)
        return;
    int r1 = r / crystalWidth;
    int c1 = c / crystalWidth;//坐标转换
    SwapCrystals(r1, c1);
}
void gamePad::SwapCrystals(int r1, int c1)
{
    std::function<bool(int, int)> chk = [this](int x, int y) { //边界判断
        return x >= 0 && x < Height && y >= 0 && y < Width;
    };
    if (nowr != -1 && nowc != -1)
    { //与当前选中位置相邻
        if (abs(r1 - nowr) + abs(c1 - nowc) == 1 && chk(r1, c1))
        {
            std::swap(crystalMap[r1][c1], crystalMap[nowr][nowc]);交换数组中记录即可
            nowc = c1;
            nowr = r1;
            this->DrawCrystals();
            this->ShowCrystals();
            cntMove++;//重绘，记录移动步数
        }
        if (cntMove == maxCntMove)
            display_released();//强行终止当前移动
    }
}
```
### 得分检查与其简单动画效果
主要通过深度优先搜索找出当前地图中所有同色联通块，然后对其数量进行逐个判断，在消除中加入适当的时间停顿从而实现伪动画效果。

积分规则为$\Delta score=\sum_{Valid Components}2.5^{NumberOfCrystals[i]}\times ComboBonus(i)$, $ComboBonus(i)=1+0.1\times \sum_{k<i} NumberOfCrystals[k]$。既能体现单次消除个数越多越好，也能体现单次移动触发的消除连击越多越好。
对于连击的判断采用多轮判断的方法处理。
```cpp
bool gamePad::CheckCrystals()
{
    checking = 1;//开始检查，屏蔽鼠标动作
    bool flag = 0;//本轮检查是否有新的combo
    this->DrawCrystals();
    this->ShowCrystals();
    int vis[7][5];//DFS用的访问记录数组
    memset(vis, 0, sizeof(vis));
    int num[50];//记录联通块大小
    memset(num, 0, sizeof(num));
    int cnt = 0;//记录联通块数量
    int kx[4] = {0, 0, -1, 1};
    int ky[4] = {-1, 1, 0, 0};
    std::function<bool(int, int)> chk = [this](int x, int y) {//检查是否越界
        return x >= 0 && x < Height && y >= 0 && y < Width;
    };
    std::function<void(int r, int c)> dfs = [&](int r, int c) {//DFS，找出所有联通块，写为lambda表达式方便引用作用域中的数组
        for (int i = 0; i < 4; i++)
            if (chk(r + kx[i], c + ky[i]) && crystalMap[r + kx[i]][c + ky[i]] == crystalMap[r][c] && !vis[r + kx[i]][c + ky[i]])
            {
                vis[r + kx[i]][c + ky[i]] = cnt;
                num[cnt]++;
                dfs(r + kx[i], c + ky[i]);
            }
    };
    auto pauseforanime = [this]() {//动画停顿效果，写为lambda表达式方便局部内调用
            QEventLoop el;
            QTimer::singleShot(animati_pause_ms, &el, SLOT(quit()));
            el.exec(); };
    for (int r = 0; r < Height; r++)
        for (int c = 0; c < Width; c++)
            if (!vis[r][c] && crystalMap[r][c])
            {
                vis[r][c] = ++cnt;
                num[cnt] = 1;
                dfs(r, c);//若该点还没被遍历过，以其为起点进行DFS
            }
    for (int i = 1; i <= cnt; i++)
        if (num[i] >= eliminateLimit)
        {
            score += pow(2.5, num[i]) * comboBonus;
            SetScore();//计分与显示
            flag = 1;
            comboBonus += 0.1;
            for (int r = 0; r < Height; r++)
                for (int c = 0; c < Width; c++)
                    if (vis[r][c] == i)
                        crystalMap[r][c] = 0;
            this->DrawCrystals();
            this->ShowCrystals();
            pauseforanime();//重绘与停顿
        }
    if (!flag)
    {
        qDebug("over!");
        comboBonus = 1.0;
        checking = 0;
        return flag;//本轮检查无得分，不再循环
    }
    LetItFall();
    this->DrawCrystals();
    this->ShowCrystals();//下落动画
    pauseforanime();
    this->SetRandomMap();
    this->DrawCrystals();
    this->ShowCrystals();//补完地图
    qDebug("Now the score is %.0lf", score);
    checking = 0;//检查结束
    return 1;//本轮检查有得分
}
```
宝石下落用一个简单的循环判断来实现。
```cpp
void gamePad::LetItFall()
{
    for (int r = Height - 1; r >= 0; r--)
        for (int c = 0; c < Width; c++)
            for (int i = 1; i <= 7; i++)
                if (crystalMap[r][c] == 0)
                {
                    for (int r1 = r - 1; r1 >= 0; r1--)
                        crystalMap[r1 + 1][c] = crystalMap[r1][c];
                    crystalMap[0][c] = 0;
                }
}
```