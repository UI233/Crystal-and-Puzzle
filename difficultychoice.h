#ifndef DIFFICULTYCHOICE_H
#define DIFFICULTYCHOICE_H

#include <QDialog>

namespace Ui {
class difficultyChoice;
}

class difficultyChoice : public QDialog
{
    Q_OBJECT

public:
    explicit difficultyChoice(QWidget *parent = 0);
    ~difficultyChoice();
    Ui::difficultyChoice *ui;
};

#endif // DIFFICULTYCHOICE_H
