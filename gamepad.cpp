#include "gamepad.h"
#include "ui_gamepad.h"
#include "ui_difficultychoice.h"
#include<QDebug>
bool gamePad::LoadMaterials(){
    char filename[50]="";
    QPixmap p(crystalWidth,crystalWidth);
    p.fill(Qt::transparent);
    crystalPix.push_back(p);
    for (int i=1;i<=6;i++) {
        sprintf(filename,":/Resources/Resources/%d.png",i);
        qDebug(filename);
        QPixmap pic(filename);
        if (pic.isNull()) {
            qDebug("notokay");
            return false;
        }
        crystalPix.push_back(pic.copy(0,0,100,100).scaled(crystalWidth,crystalWidth));
    }
    qDebug("okay");
    return true;
}

gamePad::gamePad(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gamePad),
    dialog(nullptr),
    isChosenDifficulty(false),
    timer(nullptr)
{
    LoadMaterials();
    pix=new QPixmap(300,420);
    pix->fill(Qt::transparent);
    display = new Display(pix->size(),this);
    display->setGeometry(140,120,300,420);
    display->setParent(this);
    this->DrawCrystals();
    this->ShowCrystals();
    CreatDifficultyDialog();
    ui->setupUi(this);
    connect(ui -> back,&QPushButton::clicked,this,this -> hide);
    //SetTimer(10); //TestTimer
    //connect(ui -> reset,&QPushButton::clicked,this,this -> restart);
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

void gamePad::SetScore(int score)
{
    ui -> TimerLCD -> display(score);
}

void gamePad::SetEasy()
{
    isChosenDifficulty = true;
    difficulty = gamePad::Easy;
    dialog -> hide();
    delete dialog;
    dialog = nullptr;
}

void gamePad::SetMedium()
{
    isChosenDifficulty = true;
    difficulty = gamePad::Medium;
    dialog -> hide();
    delete dialog;
    dialog = nullptr;
}

void gamePad::SetHard()
{
    isChosenDifficulty = true;
    difficulty = gamePad::Hard;
    dialog -> hide();
    delete dialog;
    dialog = nullptr;
}

int gamePad::GetDifficulty()
{
    return difficulty;
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
    pix->fill(Qt::transparent);
    for (int c=0;c<5;c++)
        for (int r=0;r<7;r++) painter.drawPixmap(c*crystalWidth,r*crystalWidth,crystalPix[crystalMap[r][c]]);
    qDebug("okay!!");
}
void gamePad::ShowCrystals(){
    display->showPix(pix);
}
