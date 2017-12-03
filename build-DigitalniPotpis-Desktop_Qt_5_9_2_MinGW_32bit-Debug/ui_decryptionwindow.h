/********************************************************************************
** Form generated from reading UI file 'decryptionwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DECRYPTIONWINDOW_H
#define UI_DECRYPTIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DecryptionWindow
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnFilePath;
    QLineEdit *txtFilePath;
    QVBoxLayout *verticalLayout;
    QTextBrowser *txtSadrzajDatoteke;
    QTextBrowser *txtKriptiraniSadrzajDatoteke;

    void setupUi(QWidget *DecryptionWindow)
    {
        if (DecryptionWindow->objectName().isEmpty())
            DecryptionWindow->setObjectName(QStringLiteral("DecryptionWindow"));
        DecryptionWindow->resize(672, 419);
        gridLayout = new QGridLayout(DecryptionWindow);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        radioButton_2 = new QRadioButton(DecryptionWindow);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout_2->addWidget(radioButton_2);

        radioButton = new QRadioButton(DecryptionWindow);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout_2->addWidget(radioButton);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btnFilePath = new QPushButton(DecryptionWindow);
        btnFilePath->setObjectName(QStringLiteral("btnFilePath"));

        horizontalLayout_3->addWidget(btnFilePath);

        txtFilePath = new QLineEdit(DecryptionWindow);
        txtFilePath->setObjectName(QStringLiteral("txtFilePath"));

        horizontalLayout_3->addWidget(txtFilePath);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        txtSadrzajDatoteke = new QTextBrowser(DecryptionWindow);
        txtSadrzajDatoteke->setObjectName(QStringLiteral("txtSadrzajDatoteke"));

        verticalLayout->addWidget(txtSadrzajDatoteke);

        txtKriptiraniSadrzajDatoteke = new QTextBrowser(DecryptionWindow);
        txtKriptiraniSadrzajDatoteke->setObjectName(QStringLiteral("txtKriptiraniSadrzajDatoteke"));

        verticalLayout->addWidget(txtKriptiraniSadrzajDatoteke);


        gridLayout->addLayout(verticalLayout, 2, 0, 1, 1);


        retranslateUi(DecryptionWindow);

        QMetaObject::connectSlotsByName(DecryptionWindow);
    } // setupUi

    void retranslateUi(QWidget *DecryptionWindow)
    {
        DecryptionWindow->setWindowTitle(QApplication::translate("DecryptionWindow", "Form", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("DecryptionWindow", "Nedekriptirana datoteka", Q_NULLPTR));
        radioButton->setText(QApplication::translate("DecryptionWindow", "Kriptirana datoteka", Q_NULLPTR));
        btnFilePath->setText(QApplication::translate("DecryptionWindow", "Otvori...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DecryptionWindow: public Ui_DecryptionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DECRYPTIONWINDOW_H
