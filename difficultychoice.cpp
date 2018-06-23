#include "difficultychoice.h"
#include "ui_difficultychoice.h"

difficultyChoice::difficultyChoice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::difficultyChoice)
{
    this -> setWindowTitle("Choose the difficluty");
    ui->setupUi(this);
}

difficultyChoice::~difficultyChoice()
{
    delete ui;
}
