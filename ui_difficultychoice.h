/********************************************************************************
** Form generated from reading UI file 'difficultychoice.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIFFICULTYCHOICE_H
#define UI_DIFFICULTYCHOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_difficultyChoice
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *Easy;
    QPushButton *Medium;
    QPushButton *Hard;

    void setupUi(QDialog *difficultyChoice)
    {
        if (difficultyChoice->objectName().isEmpty())
            difficultyChoice->setObjectName(QStringLiteral("difficultyChoice"));
        difficultyChoice->resize(310, 187);
        widget = new QWidget(difficultyChoice);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 20, 271, 151));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Easy = new QPushButton(widget);
        Easy->setObjectName(QStringLiteral("Easy"));
        Easy->setStyleSheet(QStringLiteral("color : rgb(255, 255, 255);"));

        verticalLayout->addWidget(Easy);

        Medium = new QPushButton(widget);
        Medium->setObjectName(QStringLiteral("Medium"));
        Medium->setStyleSheet(QStringLiteral("color : rgb(255, 255, 255);"));

        verticalLayout->addWidget(Medium);

        Hard = new QPushButton(widget);
        Hard->setObjectName(QStringLiteral("Hard"));
        Hard->setStyleSheet(QStringLiteral("color : rgb(255, 255, 255);"));

        verticalLayout->addWidget(Hard);


        retranslateUi(difficultyChoice);

        QMetaObject::connectSlotsByName(difficultyChoice);
    } // setupUi

    void retranslateUi(QDialog *difficultyChoice)
    {
        difficultyChoice->setWindowTitle(QApplication::translate("difficultyChoice", "Dialog", Q_NULLPTR));
        Easy->setText(QApplication::translate("difficultyChoice", "Easy", Q_NULLPTR));
        Medium->setText(QApplication::translate("difficultyChoice", "Medium", Q_NULLPTR));
        Hard->setText(QApplication::translate("difficultyChoice", "Hard", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class difficultyChoice: public Ui_difficultyChoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIFFICULTYCHOICE_H
