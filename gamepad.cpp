#include "gamepad.h"
#include "board.h"
#include "ui_gamepad.h"
#include "ui_difficultychoice.h"
#include <QDebug>
const int gamePad::timeLimits[4] = {0, 150, 100, 60};

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

gamePad::gamePad(QWidget *parent) : QWidget(parent),
                                    ui(new Ui::gamePad),
                                    dialog(nullptr),
                                    timeout(true),
                                    timer(nullptr)
{
    srand((unsigned)time(NULL));
    LoadMaterials();
    pix = new QPixmap(300, 420);
    pix->fill(Qt::transparent);
    display = new Display(pix->size(), this);
    display->setGeometry(140, 120, 300, 420);
    display->setParent(this);
    this->InitMap();
    ui->setupUi(this);
    CreatDifficultyDialog();
    connect(ui->back, &QPushButton::clicked, this, this->hide);
    //SetTimer(10); //TestTimer
    //connect(ui -> reset,&QPushButton::clicked,this,this -> restart);
    connect(ui->restart, &QPushButton::clicked, this, this->Restart);
    connect(display, SIGNAL(clicked(int, int)), this, SLOT(display_clicked(int, int)));
    connect(display, SIGNAL(released()), this, SLOT(display_released()));
    connect(display, SIGNAL(moved(int, int)), this, SLOT(display_moved(int, int)));
}

gamePad::~gamePad()
{
    delete ui;
}

void gamePad::SetTimer(int time)
{
    nowTime = time;
    ui->TimerLCD->display(time);
    if (timer == nullptr)
    {
        timer = new QTimer(this);
        connect(timer, &timer->timeout, this,
                [this]() {
                    if (nowTime)
                        nowTime--;
                    else
                    {
                        Score::Edit(difficulty,score);
                        timer->stop();
                        timeout = true;
                    }
                    ui->TimerLCD->display(nowTime);
                });
        timer->start(1000);
        timeout = false;
    }
    else
    {
        if (timer->isActive())
            timer->stop();
        timer->start(1000);
        timeout = false;
    }
}

void gamePad::SetScore()
{
    ui->ScoreLCD->display((int)score);
}

void gamePad::SetEasy()
{
    crystalType = 5;
    eliminateLimit=3;
    difficulty = gamePad::Easy;
    dialog->hide();
    delete dialog;
    dialog = nullptr;
    SetTimer(timeLimits[Easy]);
    this->SetRandomMap();
    this->DrawCrystals();
    this->ShowCrystals();
}

void gamePad::SetMedium()
{
    crystalType = 6;
    eliminateLimit=3;
    difficulty = gamePad::Medium;
    dialog->hide();
    delete dialog;
    dialog = nullptr;
    SetTimer(timeLimits[Medium]);
    this->SetRandomMap();
    this->DrawCrystals();
    this->ShowCrystals();
}

void gamePad::SetHard()
{
    crystalType = 6;
    eliminateLimit=4;
    difficulty = gamePad::Hard;
    dialog->hide();
    delete dialog;
    dialog = nullptr;
    SetTimer(timeLimits[Hard]);
    this->SetRandomMap();
    this->DrawCrystals();
    this->ShowCrystals();
}

int gamePad::GetDifficulty()
{
    return difficulty;
}

void gamePad::CreatDifficultyDialog()
{
    if (dialog != nullptr)
        return;
    dialog = new difficultyChoice(this);
    connect(dialog->ui->Easy, &QPushButton::clicked, this, this->SetEasy);
    connect(dialog->ui->Medium, &QPushButton::clicked, this, this->SetMedium);
    connect(dialog->ui->Hard, &QPushButton::clicked, this, this->SetHard);
    score = 0.0;
    SetScore();
    dialog->show();
}

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

void gamePad::InitMap()
{
    for (int c = 0; c < Width; c++)
        for (int r = 0; r < Height; r++)
            crystalMap[r][c] = 0;
}

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

void gamePad::display_moved(int r, int c)
{
    if (checking || timeout)
        return;
    int r1 = r / crystalWidth;
    int c1 = c / crystalWidth;//坐标转换
    SwapCrystals(r1, c1);
}

void gamePad::display_released()
{
    if (cntMove)
        cntStep++;
    cntMove = 0;
    if (checking || timeout)
        return;
    nowr = nowc = -1;
    while (CheckCrystals())
        ;
}

void gamePad::SwapCrystals(int r1, int c1)
{
    std::function<bool(int, int)> chk = [this](int x, int y) { //check if in the border
        return x >= 0 && x < Height && y >= 0 && y < Width;
    };
    if (nowr != -1 && nowc != -1)
    { //next to the last one
        if (abs(r1 - nowr) + abs(c1 - nowc) == 1 && chk(r1, c1))
        {
            std::swap(crystalMap[r1][c1], crystalMap[nowr][nowc]);
            nowc = c1;
            nowr = r1;
            this->DrawCrystals();
            this->ShowCrystals();
            cntMove++;
        }
        if (cntMove == maxCntMove)
            display_released();
    }
}

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
void gamePad::Restart()
{
    SetTimer(timeLimits[difficulty]);
    InitMap();
    SetRandomMap();
    DrawCrystals();
    ShowCrystals();
    score=0;
    nowr=nowc=-1;
    comboBonus=1.0;
    SetScore();
    return;
}
