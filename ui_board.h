/********************************************************************************
** Form generated from reading UI file 'board.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOARD_H
#define UI_BOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Board
{
public:
    QPushButton *back;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *Board)
    {
        if (Board->objectName().isEmpty())
            Board->setObjectName(QStringLiteral("Board"));
        Board->resize(480, 640);
        back = new QPushButton(Board);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(410, 570, 71, 71));
        back->setStyleSheet(QStringLiteral("background-image: url(:/Resources/Resources/back_button.bmp);"));
        textBrowser = new QTextBrowser(Board);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(40, 170, 411, 361));
        textBrowser->setStyleSheet(QLatin1String("background-image: url(:/Resources/Resources/TextBroswer_bg.bmp);\n"
"color: rgb(255, 255, 255);\n"
"font: 18pt \"Mistral\";"));

        retranslateUi(Board);

        QMetaObject::connectSlotsByName(Board);
    } // setupUi

    void retranslateUi(QWidget *Board)
    {
        Board->setWindowTitle(QApplication::translate("Board", "Form", Q_NULLPTR));
        back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Board: public Ui_Board {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARD_H
