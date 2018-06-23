#include "display.h"
#include<QPixmap>
#include<QMouseEvent>

Display::Display(QSize sz, QWidget *parent):QLabel(parent)
{
    this->resize(sz);
    this->setAlignment(Qt::AlignLeft | Qt::AlignTop);
}
void Display::showPix(QPixmap *pix){
    this->setPixmap(*pix);
}
void Display::mouseReleaseEvent(QMouseEvent *e){
    emit clicked(e->y(),e->x());
}

Display::~Display(){}
