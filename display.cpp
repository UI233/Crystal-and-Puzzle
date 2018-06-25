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
void Display::mousePressEvent(QMouseEvent *e){
    emit clicked(e->y(),e->x());
}

void Display::mouseMoveEvent(QMouseEvent *e){
    emit moved(e->y(),e->x());
}

void Display::mouseReleaseEvent(QMouseEvent *e){
    emit released();
}
Display::~Display(){}
