#ifndef BOARD_H
#define BOARD_H

#include <QWidget>
#include <QString>
#include <string>

namespace Ui {
class Board;
}

class Board : public QWidget
{
    Q_OBJECT

public:
    explicit Board(QWidget *parent = 0);
    virtual ~Board();
    Ui::Board *ui;
    std::string context;
};

class Help : public Board
{
    Q_OBJECT

public :
    explicit Help(QWidget *parent);
    ~Help();
};

class Score : public Board
{
    Q_OBJECT

public:
    explicit Score(QWidget *parent);
    ~Score();
    static void Edit(int difficulty, int time);
private:
    inline std::string TransformTime(int sec)
    {
        std::string res = std::string("0  :   ");
        int minutes = sec / 60, seconds = sec % 60;
        res[1] = '0' + minutes;
        res[6] = '0' + seconds / 10;
        res[7] = '0' + seconds % 10;
        return res;
    }

    inline std::string TransformDifficulty(int difficulty)
    {
        switch (difficulty)
        {
            case 3:
                return std::string("Hard");
                break;
            case 2:
                return std::string("Medium");
                break;
            case 1:
                return std::string("Easy");
                break;
        }
        return NULL;
    }

};
#endif // BOARD_H