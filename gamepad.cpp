#include "gamepad.h"
#include "ui_gamepad.h"

gamePad::gamePad(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gamePad)
{
    ui->setupUi(this);
    connect(ui -> back,&QPushButton::clicked,this,this -> hide);
    //connect(ui -> reset,&QPushButton::clicked,this,this -> restart);
}

gamePad::~gamePad()
{
    delete ui;
}
