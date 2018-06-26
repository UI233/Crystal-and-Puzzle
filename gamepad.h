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
    bool CheckCrystals();
    bool LoadMaterials();
    void LetItFall();

private:
    static constexpr int timeLimits[4] = {0 , 150 , 100 , 60};
    static constexpr int Hard = 3 , Medium = 2, Easy = 1;
    std::vector<QPixmap> crystalPix;
    std::vector<QPixmap> crystalPixSelected;
    int difficulty;
    int nowTime;
    int crystalMap[7][5];
    int nowr=-1;
    int nowc=-1;
    int animati_pause_ms=300;//“动画”时长
    int cntStep=0;//移动的总次数
    int cntMove=0;//每次移动的步数
    double score=0.0;//总分
    double comboBonus=1.0;//combo加分
    bool checking=0;//正在放动画
    const int Width=5;
    const int Height=7;
    const int crystalWidth=60;
    const int crystalType=6;
    const int maxCntMove=20;//每次移动步数限制
    bool isChosenDifficulty;
    Ui::gamePad *ui;
    QPixmap *pix;
    QPixmap *displayBg;
    Display *display;
    difficultyChoice *dialog;
    QTimer *timer;
};
#endif // GAMEPAD_H
