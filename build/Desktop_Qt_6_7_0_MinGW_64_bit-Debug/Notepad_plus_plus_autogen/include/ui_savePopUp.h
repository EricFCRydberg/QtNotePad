/********************************************************************************
** Form generated from reading UI file 'savePopUp.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEPOPUP_H
#define UI_SAVEPOPUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SavePopUp
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *save;
    QPushButton *continue_2;

    void setupUi(QDialog *SavePopUp)
    {
        if (SavePopUp->objectName().isEmpty())
            SavePopUp->setObjectName("SavePopUp");
        SavePopUp->resize(551, 224);
        verticalLayoutWidget = new QWidget(SavePopUp);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(60, 50, 411, 93));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        save = new QPushButton(verticalLayoutWidget);
        save->setObjectName("save");

        horizontalLayout->addWidget(save);

        continue_2 = new QPushButton(verticalLayoutWidget);
        continue_2->setObjectName("continue_2");

        horizontalLayout->addWidget(continue_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SavePopUp);

        QMetaObject::connectSlotsByName(SavePopUp);
    } // setupUi

    void retranslateUi(QDialog *SavePopUp)
    {
        SavePopUp->setWindowTitle(QCoreApplication::translate("SavePopUp", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SavePopUp", "What type of File do you want to open?", nullptr));
        save->setText(QCoreApplication::translate("SavePopUp", "Text", nullptr));
        continue_2->setText(QCoreApplication::translate("SavePopUp", "HTML", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SavePopUp: public Ui_SavePopUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEPOPUP_H
