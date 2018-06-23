#ifndef GAMEPAD_H
#define GAMEPAD_H

#include <QTimer>
#include <QWidget>
#include <difficultychoice.h>

namespace Ui {
class gamePad;
}

class gamePad : public QWidget
{
    Q_OBJECT

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

private:
    static constexpr int timeLimits[4] = {0 , 150 , 100 , 60};
    static constexpr int Hard = 3 , Medium = 2, Easy = 1;
    int difficulty;
    int nowTime;
    bool isChosenDifficulty;
    Ui::gamePad *ui;
    difficultyChoice *dialog;
    QTimer *timer;
};

#endif // GAMEPAD_H
