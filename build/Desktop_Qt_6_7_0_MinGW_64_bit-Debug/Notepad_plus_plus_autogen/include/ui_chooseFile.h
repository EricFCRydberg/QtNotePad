/********************************************************************************
** Form generated from reading UI file 'chooseFile.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEFILE_H
#define UI_CHOOSEFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseFile
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *save;
    QPushButton *continue_2;

    void setupUi(QDialog *ChooseFile)
    {
        if (ChooseFile->objectName().isEmpty())
            ChooseFile->setObjectName("ChooseFile");
        ChooseFile->resize(551, 224);
        verticalLayoutWidget = new QWidget(ChooseFile);
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


        retranslateUi(ChooseFile);

        QMetaObject::connectSlotsByName(ChooseFile);
    } // setupUi

    void retranslateUi(QDialog *ChooseFile)
    {
        ChooseFile->setWindowTitle(QCoreApplication::translate("ChooseFile", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ChooseFile", "What type of File do you want to open?", nullptr));
        save->setText(QCoreApplication::translate("ChooseFile", "Text", nullptr));
        continue_2->setText(QCoreApplication::translate("ChooseFile", "HTML", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseFile: public Ui_ChooseFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEFILE_H
