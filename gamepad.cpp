#include "gamepad.h"
#include "ui_gamepad.h"
#include "ui_difficultychoice.h"
#include<QDebug>

const int gamePad::timeLimits[4] = {0, 150, 100, 60};
bool gamePad::LoadMaterials(){
    char filename[50]="";
    QPixmap p(crystalWidth,crystalWidth);
    p.fill(Qt::transparent);
    crystalPix.push_back(p);
    for (int i=1;i<=6;i++) {
        sprintf(filename,":/Resources/Resources/%d.png",i);
        //qDebug(filename);
        QPixmap pic(filename);
        if (pic.isNull()) {
            //qDebug("notokay");
            return false;
        }
        crystalPix.push_back(pic.copy(0,0,100,100).scaled(crystalWidth,crystalWidth));
    }
    displayBg=new QPixmap(":/Resources/Resources/display_background");
    crystalPixSelected.push_back(p);
    for (int i=1;i<=6;i++) {
        sprintf(filename,":/Resources/Resources/%d-1.png",i);
        //qDebug(filename);
        QPixmap pic(filename);
        if (pic.isNull()) {
            //qDebug("notokay");
            return false;
        }
        crystalPixSelected.push_back(pic.copy(0,0,100,100).scaled(crystalWidth,crystalWidth));
    }
    //qDebug("okay");
    return true;
}

gamePad::gamePad(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gamePad),
    dialog(nullptr),
    isChosenDifficulty(false),
    timer(nullptr)
{
    srand((unsigned)time(NULL));
    LoadMaterials();
    pix=new QPixmap(300,420);
    pix->fill(Qt::transparent);
    display = new Display(pix->size(),this);
    display->setGeometry(140,120,300,420);
    display->setParent(this);
    this->InitMap();
    this->SetRandomMap();
    this->DrawCrystals();
    this->ShowCrystals();
    CreatDifficultyDialog();
    ui->setupUi(this);
    connect(ui -> back,&QPushButton::clicked,this,this -> hide);
    connect(ui -> restart,&QPushButton::clicked,this,this -> Restart);
    //SetTimer(10); //TestTimer
    //connect(ui -> reset,&QPushButton::clicked,this,this -> restart);
    connect(display,SIGNAL(clicked(int,int)),this,SLOT(display_clicked(int,int)));
    connect(display,SIGNAL(released()),this,SLOT(display_released()));
    connect(display,SIGNAL(moved(int,int)),this,SLOT(display_moved(int,int)));
}

gamePad::~gamePad()
{
    delete ui;
}

void gamePad::SetTimer(int time)
{
    nowTime = time;
    ui -> TimerLCD -> display(time);
    if(timer == nullptr)
    {
        timer = new QTimer(this);
        connect(timer,& timer -> timeout,this,
        [this]()
        {
            if(nowTime)
                nowTime--;
            else timer -> stop();
            ui -> TimerLCD -> display(nowTime);
        });
        timer -> start(1000);
    }
    else
    {
        if(timer -> isActive())
            timer -> stop();
        timer -> start(1000);
    }
}

void gamePad::SetScore(int sco)
{
    score = sco;
    ui -> TimerLCD -> display(score);
}

void gamePad::SetEasy()
{
    isChosenDifficulty = true;
    difficulty = gamePad::Easy;
    dialog -> hide();
    delete dialog;
    dialog = nullptr;
    SetTimer(timeLimits[Easy]);
}

void gamePad::SetMedium()
{
    isChosenDifficulty = true;
    difficulty = gamePad::Medium;
    dialog -> hide();
    delete dialog;
    dialog = nullptr;
    SetTimer(timeLimits[Medium]);
}

void gamePad::SetHard()
{
    isChosenDifficulty = true;
    difficulty = gamePad::Hard;
    dialog -> hide();
    delete dialog;
    dialog = nullptr;
    SetTimer(timeLimits[Hard]);
}

int gamePad::GetDifficulty()
{
    return difficulty;
}

void gamePad::Restart()
{
    SetTimer(timeLimits[difficulty]);
    InitMap();
    SetRandomMap();
    DrawCrystals();
    ShowCrystals();
    SetScore(0);
    return ;
}

void gamePad::CreatDifficultyDialog()
{
    if(dialog !=  nullptr)
           return;
    dialog = new difficultyChoice(this);
    connect(dialog -> ui -> Easy,&QPushButton::clicked,this,this -> SetEasy);
    connect(dialog -> ui -> Medium,&QPushButton::clicked,this,this -> SetMedium);
    connect(dialog -> ui -> Hard,&QPushButton::clicked,this,this -> SetHard);
    dialog -> show();
}

void gamePad::DrawCrystals(){
    QPainter painter(pix);
    painter.drawPixmap(0,0,*displayBg);
    for (int c=0;c<5;c++)
        for (int r=0;r<7;r++) if (nowr!=r||nowc!=c)
            painter.drawPixmap(c*crystalWidth,r*crystalWidth,crystalPix[crystalMap[r][c]]);
    if (nowr!=-1) painter.drawPixmap(nowc*crystalWidth,nowr*crystalWidth,crystalPixSelected[crystalMap[nowr][nowc]]);
    qDebug("okay!!");
}
void gamePad::ShowCrystals(){
    display->showPix(pix);
}

void gamePad::SetRandomMap(){
    auto chk=[this](int x,int y,int val){
        if (x>0&&crystalMap[x-1][y]==val) return false;
        if (x<Height-1&&crystalMap[x+1][y]==val) return false;
        if (y>0&&crystalMap[x][y-1]==val) return false;
        if (y<Width-1&&crystalMap[x][y+1]==val) return false;
        return true;
    };
    for (int c=0;c<Width;c++)
        for (int r=0;r<Height;r++) if (crystalMap[r][c]==0){
            int val=(rand()%6)+1;
            while(!chk(r,c,val)) val=(rand()%6)+1;
            crystalMap[r][c]=val;
            qDebug("Position:%d %d Color:%d",r,c,val);
        }

}

void gamePad::InitMap(){
    for (int c=0;c<Width;c++)
        for (int r=0;r<Height;r++) crystalMap[r][c]=0;
}

void gamePad::display_clicked(int r, int c){
    if (checking) return ;
    cntMove=0;
    nowr=r/crystalWidth;
    nowc=c/crystalWidth;
    if (crystalMap[nowr][nowc]==0) nowr=nowc=-1;
    this->DrawCrystals();
    this->ShowCrystals();
}

void gamePad::display_moved(int r, int c){
    if (checking) return ;
    int r1=r/crystalWidth;
    int c1=c/crystalWidth;
    //qDebug()<<r1<<" "<<c1<<" now:"<<nowr<<" "<<nowc;
    SwapCrystals(r1,c1);
}

void gamePad::display_released(){
    if (cntMove) cntStep++;
    cntMove=0;
    if (checking) return ;
    nowr=nowc=-1;
    while(CheckCrystals());
}

void gamePad::SwapCrystals(int r1, int c1){
    std::function<bool(int,int)> chk=[this](int x,int y) {//check if in the border
        return x>=0&&x<Height&&y>=0&&y<Width;
    };
    if (nowr!=-1&&nowc!=-1){//next to the last one
        if (abs(r1-nowr)+abs(c1-nowc)==1&&chk(r1,c1)){
            std::swap(crystalMap[r1][c1],crystalMap[nowr][nowc]);
            nowc=c1;
            nowr=r1;
            this->DrawCrystals();
            this->ShowCrystals();
            cntMove++;
        }
        if (cntMove==maxCntMove) display_released();
    }
}

bool gamePad::CheckCrystals(){
    checking = 1;
    bool flag=0;
    qDebug("%lf\n",comboBonus);
    this->DrawCrystals();
    this->ShowCrystals();
    int vis[7][5];
    memset(vis,0,sizeof(vis));
    int num[50];
    memset(num,0,sizeof(num));
    int cnt=0;
    int kx[4]={0,0,-1,1};
    int ky[4]={-1,1,0,0};
    std::function<bool(int,int)> chk=[this](int x,int y) {
        return x>=0&&x<Height&&y>=0&&y<Width;
    };
    std::function<void(int r,int c)> dfs=[&](int r,int c){
        for (int i=0;i<4;i++)
            if (chk(r+kx[i],c+ky[i])&&crystalMap[r+kx[i]][c+ky[i]]==crystalMap[r][c]&&!vis[r+kx[i]][c+ky[i]]){
                vis[r+kx[i]][c+ky[i]]=cnt;
                num[cnt]++;
                dfs(r+kx[i],c+ky[i]);
            }
    };
    auto pauseforanime=[this](){
            QEventLoop el;
            QTimer::singleShot(animati_pause_ms, &el, SLOT(quit()));
            el.exec();};
    for (int r=0;r<Height;r++)
        for (int c=0;c<Width;c++)if (!vis[r][c]&&crystalMap[r][c]) {
            vis[r][c]=++cnt;
            num[cnt]=1;
            dfs(r,c);
        }
    for (int i=1;i<=cnt;i++) if (num[i]>2)
    {
        score+=10*pow(2.5,num[i])*comboBonus;
        flag=1;
        comboBonus+=0.1;
        for (int r=0;r<Height;r++)
            for (int c=0;c<Width;c++) if (vis[r][c]==i) crystalMap[r][c]=0;
        this->DrawCrystals();
        this->ShowCrystals();
        pauseforanime();
    }
    if (!flag) {
        qDebug("over!");
        comboBonus=1.0;
        checking=0;
        return flag;
    }
    LetItFall();
    this->DrawCrystals();
    this->ShowCrystals();
    pauseforanime();
    this->SetRandomMap();
    this->DrawCrystals();
    this->ShowCrystals();
    qDebug("Now the score is %.0lf",score);
    checking = 0;
    return 1;
}

void gamePad::LetItFall(){
    for (int r=Height-1;r>=0;r--)
        for (int c=0;c<Width;c++)
            for (int i=1;i<=7;i++)
                if (crystalMap[r][c]==0) {
            for (int r1=r-1;r1>=0;r1--) crystalMap[r1+1][c]=crystalMap[r1][c];
            crystalMap[0][c]=0;
        }
}
