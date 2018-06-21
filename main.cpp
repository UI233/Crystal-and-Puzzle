#include "mainwindow.h"
#include <QApplication>
#include <QMediaPlayer>
#include <QUrl>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString path=QDir::currentPath();
    qDebug()<<"the path is  "<<path<<endl;
    MainWindow w;
    w.show();

    QMediaPlayer *musicPlayer = new QMediaPlayer(&a);
    musicPlayer -> setMedia(QUrl("qrc:/Resources/bgm.mp3"));
    musicPlayer -> setVolume(100);
    musicPlayer -> play();

    return a.exec();
}
