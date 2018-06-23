#include "gamepad.h"
#include "ui_gamepad.h"
#include "ui_difficultychoice.h"

gamePad::gamePad(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gamePad),
    dialog(nullptr),
    isChosenDifficulty(false),
    timer(nullptr)
{
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
