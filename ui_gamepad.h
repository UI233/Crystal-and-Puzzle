/********************************************************************************
** Form generated from reading UI file 'gamepad.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEPAD_H
#define UI_GAMEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gamePad
{
public:
    QPushButton *back;
    QWidget *layoutWidget;
    QVBoxLayout *Score;
    QLabel *ScoreLable;
    QLCDNumber *ScoreLCD;
    QPushButton *restart;
    QWidget *layoutWidget1;
    QVBoxLayout *Timer;
    QLabel *TimerLabel;
    QLCDNumber *TimerLCD;

    void setupUi(QWidget *gamePad)
    {
        if (gamePad->objectName().isEmpty())
            gamePad->setObjectName(QStringLiteral("gamePad"));
        gamePad->resize(480, 640);
        gamePad->setCursor(QCursor(Qt::ArrowCursor));
        gamePad->setAutoFillBackground(true);
        gamePad->setStyleSheet(QStringLiteral(""));
        back = new QPushButton(gamePad);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(410, 0, 71, 71));
        back->setStyleSheet(QStringLiteral("background-image: url(:/Resources/Resources/back_button.bmp);"));
        layoutWidget = new QWidget(gamePad);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 370, 111, 81));
        Score = new QVBoxLayout(layoutWidget);
        Score->setObjectName(QStringLiteral("Score"));
        Score->setContentsMargins(0, 0, 0, 0);
        ScoreLable = new QLabel(layoutWidget);
        ScoreLable->setObjectName(QStringLiteral("ScoreLable"));
        ScoreLable->setStyleSheet(QLatin1String("font: 12pt \"Bradley Hand ITC\";\n"
"color:rgb(255, 255, 255);\n"
""));

        Score->addWidget(ScoreLable);

        ScoreLCD = new QLCDNumber(layoutWidget);
        ScoreLCD->setObjectName(QStringLiteral("ScoreLCD"));
        ScoreLCD->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        Score->addWidget(ScoreLCD);

        restart = new QPushButton(gamePad);
        restart->setObjectName(QStringLiteral("restart"));
        restart->setGeometry(QRect(410, 570, 71, 71));
        restart->setStyleSheet(QStringLiteral("border-image: url(:/Resources/Resources/restart_button.bmp);"));
        layoutWidget1 = new QWidget(gamePad);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 180, 111, 81));
        Timer = new QVBoxLayout(layoutWidget1);
        Timer->setObjectName(QStringLiteral("Timer"));
        Timer->setContentsMargins(0, 0, 0, 0);
        TimerLabel = new QLabel(layoutWidget1);
        TimerLabel->setObjectName(QStringLiteral("TimerLabel"));
        TimerLabel->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"font: 12pt \"Bradley Hand ITC\";"));

        Timer->addWidget(TimerLabel);

        TimerLCD = new QLCDNumber(layoutWidget1);
        TimerLCD->setObjectName(QStringLiteral("TimerLCD"));
        TimerLCD->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        Timer->addWidget(TimerLCD);


        retranslateUi(gamePad);

        QMetaObject::connectSlotsByName(gamePad);
    } // setupUi

    void retranslateUi(QWidget *gamePad)
    {
        gamePad->setWindowTitle(QApplication::translate("gamePad", "Form", Q_NULLPTR));
        back->setText(QString());
        ScoreLable->setText(QApplication::translate("gamePad", "      Scores", Q_NULLPTR));
        restart->setText(QString());
        TimerLabel->setText(QApplication::translate("gamePad", "      Time", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gamePad: public Ui_gamePad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEPAD_H
