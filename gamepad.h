#ifndef GAMEPAD_H
#define GAMEPAD_H

#include <QWidget>

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

private:
    static constexpr int timeLimits[4] = {0 , 150 , 100 , 60};
    static constexpr int Hard = 3 , Medium = 2, Easy = 1;
    Ui::gamePad *ui;
    int difficulty;
};

#endif // GAMEPAD_H
