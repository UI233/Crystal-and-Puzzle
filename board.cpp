#include "board.h"
#include "ui_board.h"
#include <fstream>

Board::Board(QWidget *parent) :
    QWidget(parent),
    context(""),
    ui(new Ui::Board)
{
    ui->setupUi(this);
    connect(ui -> back,&QPushButton::clicked,this,this -> hide);
}

Board::~Board()
{
    delete ui;
}

Help::Help(QWidget *parent = NULL):
    Board(parent)
{
    char *temp;
    temp = new char[5000];
    std::fstream readme("readme.txt",std::ios_base::in);
    if(readme.is_open() == false)
        return ;
    readme.seekg(0,readme.end);
    int length = readme.tellg();
    readme.seekg(0,readme.beg);
    readme.read(temp,length);
    temp[length] = 0;
    context = std::string(temp);
    delete temp;
    this -> ui -> textBrowser -> setPlainText(QString::fromStdString(context));
    readme.close();
}

Help::~Help()
{
    delete ui;
}

Score::Score(QWidget *parent = NULL):
    Board(parent)
{
    std::fstream scoreboard("Board.in",std::ios_base::in);
    if(scoreboard.is_open() == false)
           return ;
    int n;
    scoreboard >> n;
    for(int i=0;i<n;i++)
    {
        int score,difficulty;
        scoreboard >> difficulty >> score;
        context += "*  ";
        context += '0' + i;
        context += "   " ;
        context += TransformDifficulty(difficulty) + "   :   " + std::to_string(score);
        context += '\n';
        context += '\n';
    }
    scoreboard.close();
    ui -> textBrowser -> setPlainText(QString::fromStdString(context));
    return ;
}

Score::~Score()
{
    delete ui;
}

void Score::Edit(int difficulty, int score)
{
    static int diff[11],use[11],n,pos,rank,tmprank;
    pos = -1;
    std::fstream in("Board.in", std::ios_base::in);
    //If the file doesn't exist then creat one;
    if(in.is_open() == false)
    {
        in.open("Board.in",std::ios_base::out);
        in << 1 << std::endl;
        n = 1;
        in << difficulty << " " << score << std::endl;
        in.close();
        return ;
    }
    //Read the file to decide whether to update the board or not.
    in >> n;
    rank = difficulty * score;
    for(int i=0;i<n && pos == -1;i++)
    {
        in >> diff[i];
        in >> use[i];
        tmprank = diff[i] * use[i];
        if(tmprank < rank)
        {
            pos = i;
        }
    }
    in.close();
    //Update the Board.
    if(pos == -1)
    {
        if(n >= 5)
            return ;
        diff[n] = difficulty;
        use[n] = score;
        ++n;
    }
    else
    {
        for(int i=n; i > pos ; i--)
        {
            diff[i] = diff[i - 1];
            use[i] = use[i - 1];
        }
        diff[pos] = difficulty;
        use[pos] = score;
        if(n < 5)
            ++n;
    }

    in.close();
    in.open("Board.in" , std::ios_base::out);
    if(in.is_open() == false)
    {
       // std::cerr << "Can't open File";
        return ;
    }
    in << n << std::endl;
    for(int i=0;i<n;i++)
    {
        in << diff[i] << " " << use[i] <<std::endl;
    }
    in.close();
    return ;
}

