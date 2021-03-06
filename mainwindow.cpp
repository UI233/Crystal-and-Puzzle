#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMediaPlayer>

using std::fstream;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    score(NULL),
    help(NULL),
    game(NULL),
    musicPlayer(new QMediaPlayer(this))
{
    ui->setupUi(this);
    connect(ui -> helpme,&QPushButton::clicked,this,ShowHelp);
    connect(ui -> highscore,&QPushButton::clicked,this,ShowBoard);
    connect(ui -> StGame,&QPushButton::clicked,this,StartGame);
    musicPlayer -> setMedia(QUrl("qrc:/Resources/bgm.mp3"));
    musicPlayer -> setVolume(80);
    musicPlayer -> play();
}

MainWindow::~MainWindow()
{
    delete musicPlayer;
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
        delete score;
        score = new Score(this);
        score -> show();
    }
}

void MainWindow::EditBoard(int difficulty, int time)
{
    Score::Edit(difficulty, time);
}

bool MainWindow::StartGame()
{
    if(game == NULL)
    {
        game = new gamePad(this);
        game -> show();
        //ui -> hide();
    }
    else
    {
        game -> CreatDifficultyDialog();
        game -> show();
    }
    return true;
}
