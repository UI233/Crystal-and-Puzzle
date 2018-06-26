#ifndef GAMEPAD_H
#define GAMEPAD_H

#include <QTimer>
#include <qframe.h>
#include <QWidget>
#include <difficultychoice.h>
#include <Qpainter>
#include "display.h"

namespace Ui {
class gamePad;
}

class gamePad : public QWidget
{
    Q_OBJECT
public slots:
    void display_clicked(int r,int c);
    void display_moved(int r,int c);
    void display_released();
public:
    explicit gamePad(QWidget *parent = 0);
    ~gamePad();
    void Restart();
    //
    int GetDifficulty();
    void SetEasy();
    void SetMedium();
    void SetHard();
    void SetTimer(int);
    void SetScore(int);
    void CreatDifficultyDialog();
    void InitMap();
    void SetRandomMap();
    void DrawCrystals();
    void ShowCrystals();
    void SwapCrystals(int,int);
    void CheckCrystals();
    bool LoadMaterials();

private:
    static const int timeLimits[4];
    static constexpr int Hard = 3 , Medium = 2, Easy = 1;
    std::vector<QPixmap> crystalPix;
    int difficulty;
    int nowTime;
    int score;
    int crystalMap[7][5];
    int nowr;
    int nowc;
    const int Width=5;
    const int Height=7;
    const int crystalWidth=60;
    const int crystalType=6;
    bool isChosenDifficulty;
    Ui::gamePad *ui;
    QPixmap *pix;
    Display *display;
    difficultyChoice *dialog;
    QTimer *timer;
};
#endif // GAMEPAD_H
