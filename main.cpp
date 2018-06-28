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
    w.setWindowTitle("Crystal & Puzzle");

    return a.exec();
}
