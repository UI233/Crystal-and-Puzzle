#ifndef DISPLAY_H
#define DISPLAY_H

#include<QLabel>
namespace Ui {
    class Display;
}
class Display:public QLabel
{
    Q_OBJECT
public:
    Display(QSize sz = QSize(50,50),QWidget *parent = nullptr);
    ~Display();

    void showPix(QPixmap*);
signals:
    void clicked(int,int);
protected:
    void mouseReleaseEvent(QMouseEvent *e);
private:
};

#endif // DISPLAY_H
