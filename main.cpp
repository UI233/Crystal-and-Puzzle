#include "mainwindow.h"
#include <QApplication>
#include <QMediaPlayer>
#include <QUrl>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QMediaPlayer *musicPlayer = new QMediaPlayer(&a);
    musicPlayer -> setMedia(QUrl("qrc:/Resources/bgm.mp3"));
    musicPlayer -> setVolume(80);
    musicPlayer -> play();

    return a.exec();
}
