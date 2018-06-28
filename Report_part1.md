### 概述
本次程序是一个基于《神魔之塔》的消除游戏
目标是在给定的时间内，消除尽可能多的宝石以获取尽可能的分数
本消除游戏与传统消除游不同的地方在于，玩家一次可以拖动方块多步，且只需产生方块数大于三的连通块便会进行消除。

本应用选取了Qt工具包作为开发图形界面的工具
开发环境为Windows10
选用的语言为C++

[本项目GitHub链接](https://github.com/UI233/Crystal-and-Puzzle)
### UI的实现

####主窗口
主窗口由一个Mainwindow类控制，包括三个PushButton分别用以进入游戏主界面，查看排行榜，以及帮助说明。

#### 用来作为排行榜和帮助界面基类的Board类
Declaration
```cpp
namespace Ui {
class Board;
}

class Board : public QWidget
{
    Q_OBJECT

public:
    explicit Board(QWidget *parent = 0);
    virtual ~Board();
    //该成员由Qt Designer自动生成
    //主要包括一个Text Browser用来显示相关的文档
    //以及一个用来返回的PushButton
    Ui::Board *ui;
    std::string context;
};
```


### Score和 Help
Help类主要完成显示帮助文档的工作，所需要的功能比较单一，可直接继承Board类即可。
为此Help类额外实现了读取外部文件以及正确地在Text Browser上显示的功能。

Declaration
```cpp
class Help : public Board
{
    Q_OBJECT

public :
    explicit Help(QWidget *parent);
    ~Help();
};
```

而Score类所需要的显示方式还需要将外部的文档正确的翻译，显示在Text Browser上面。并且需要附带修改排行榜即写入外部文件的功能。

Declaration
```cpp
class Score : public Board
{
    Q_OBJECT

public:
    explicit Score(QWidget *parent);
    ~Score();
    //修改排行榜
    static void Edit(int difficulty, int time);
private:
    inline std::string TransformDifficulty(int difficulty)
    {
        switch (difficulty)
        {
            case 3:
                return std::string("Hard     ");
                break;
            case 2:
                return std::string("Medium");
                break;
            case 1:
                return std::string("Easy     ");
                break;
        }
        return NULL;
    }

};
```

### 游玩界面的UI
#### 难度选择Dialog
在进入真实游玩界面前，当用户按下开始游戏的时候，会弹出一个让用户选择难度的Dialog，让用户选择想游玩的难度。
Dialog类的成员主要是三个按键
```cpp
    QPushButton *Easy;
    QPushButton *Medium;
    QPushButton *Hard;
```
分别映射到设置简单、中等、困难难度

#### 游玩主界面
游玩界面主要包括三部分：
两个LCD显示，两个PushButton，主游玩界面。
两个LCD显示主要一个用来记录剩余的时间，为此在游戏开始时会启动一个间隔为1S的timer，在Timer即使结束的时候，会自动Update所得的分数，并且修改排行榜文件
```cpp
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
```
LCD分数显示器则是在得分时实时修改显示的数字
```cpp
void gamePad::SetScore()
{
    ui->ScoreLCD->display((int)score);
}
```

而两个PushButton则是一个用于返回，一个用于重置以便在时间结束之后重新游玩。
```cpp
    QPushButton *restart;
    QPushButton *back;
```
分别映射到Restart()函数，将各值初始化，并且重新随机生成地图
```cpp
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
```
