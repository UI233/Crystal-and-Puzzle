/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *StGame;
    QPushButton *highscore;
    QPushButton *helpme;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(480, 640);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setToolTipDuration(-2);
        MainWindow->setStyleSheet(QStringLiteral("background-image: url(:/Resources/Resources/menu_background.bmp); "));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        StGame = new QPushButton(centralWidget);
        StGame->setObjectName(QStringLiteral("StGame"));
        StGame->setGeometry(QRect(180, 290, 101, 31));
        StGame->setStyleSheet(QString::fromUtf8("font: 9pt \"\346\226\271\346\255\243\345\247\232\344\275\223\";\n"
"color: rgb(161, 161, 161);\n"
"background-image: url(:/Resources/Resources/button2.bmp);"));
        highscore = new QPushButton(centralWidget);
        highscore->setObjectName(QStringLiteral("highscore"));
        highscore->setGeometry(QRect(180, 350, 101, 31));
        highscore->setStyleSheet(QString::fromUtf8("font: 9pt \"\346\226\271\346\255\243\345\247\232\344\275\223\";\n"
"color: rgb(161, 161, 161);\n"
"background-image: url(:/Resources/Resources/button2.bmp);"));
        helpme = new QPushButton(centralWidget);
        helpme->setObjectName(QStringLiteral("helpme"));
        helpme->setGeometry(QRect(180, 410, 101, 31));
        helpme->setStyleSheet(QString::fromUtf8("font: 9pt \"\346\226\271\346\255\243\345\247\232\344\275\223\";\n"
"color: rgb(161, 161, 161);\n"
"background-image: url(:/Resources/Resources/button2.bmp);"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        StGame->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\270\270\346\210\217", Q_NULLPTR));
        highscore->setText(QApplication::translate("MainWindow", "\351\253\230\345\210\206\346\246\234", Q_NULLPTR));
        helpme->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
