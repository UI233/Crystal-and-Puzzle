#include "mainwindow.h"
#include "ui_mainwindow.h"

using std::fstream;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    score(NULL),
    help(NULL)
{
    ui->setupUi(this);
    connect(ui -> helpme,&QPushButton::clicked,this,ShowHelp);
    connect(ui -> highscore,&QPushButton::clicked,this,ShowBoard);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ShowHelp()
{
    if(help == NULL)
    {
        help = new Help(this);
        help -> show();
        return ;
    }
    else
    {
        help -> show();
        return ;
    }
}

void MainWindow::ShowBoard()
{
    if(score == NULL)
    {
        score = new Score(this);
        score -> show();
        return ;
    }
    else
    {
        score -> show();
    }
}

void MainWindow::EditBoard(int difficulty, int time)
{
    Score::Edit(difficulty, time);
}
