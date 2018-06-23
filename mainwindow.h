#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <iostream>
#include <fstream>
#include <string>
#include "board.h"
#include "gamepad.h"

 namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void ShowHelp();
    void ShowBoard();
    //Call this function to update the HighScoreBoard.
    //The parameter is the difficulty the player played and the time player used to win the game.
    //Time is measured in sec.
    //Difficulty: Hard - 3, Medium - 2 , Easy - 1
    void EditBoard(int difficulty,int time);
    //Use this function to start a new game.
    bool StartGame();
private:
    Ui::MainWindow *ui;
    std::string filename;
    Board *score,*help;
    gamePad *game;
};

#endif // MAINWINDOW_H
