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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DecryptionWindow
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnFilePath;
    QLineEdit *txtFilePath;
    QTextBrowser *txtSadrzajDatoteke;
    QTextBrowser *txtKriptiraniSadrzajDatoteke;
    QWidget *tab_3;

    void setupUi(QWidget *DecryptionWindow)
    {
        if (DecryptionWindow->objectName().isEmpty())
            DecryptionWindow->setObjectName(QStringLiteral("DecryptionWindow"));
        DecryptionWindow->resize(672, 419);
        gridLayout = new QGridLayout(DecryptionWindow);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));

        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        tabWidget = new QTabWidget(DecryptionWindow);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btnFilePath = new QPushButton(tab);
        btnFilePath->setObjectName(QStringLiteral("btnFilePath"));

        horizontalLayout_3->addWidget(btnFilePath);

        txtFilePath = new QLineEdit(tab);
        txtFilePath->setObjectName(QStringLiteral("txtFilePath"));

        horizontalLayout_3->addWidget(txtFilePath);


        verticalLayout->addLayout(horizontalLayout_3);

        txtSadrzajDatoteke = new QTextBrowser(tab);
        txtSadrzajDatoteke->setObjectName(QStringLiteral("txtSadrzajDatoteke"));

        verticalLayout->addWidget(txtSadrzajDatoteke);

        txtKriptiraniSadrzajDatoteke = new QTextBrowser(tab);
        txtKriptiraniSadrzajDatoteke->setObjectName(QStringLiteral("txtKriptiraniSadrzajDatoteke"));

        verticalLayout->addWidget(txtKriptiraniSadrzajDatoteke);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(DecryptionWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DecryptionWindow);
    } // setupUi

    void retranslateUi(QWidget *DecryptionWindow)
    {
        DecryptionWindow->setWindowTitle(QApplication::translate("DecryptionWindow", "Form", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("DecryptionWindow", "Tab 2", Q_NULLPTR));
        btnFilePath->setText(QApplication::translate("DecryptionWindow", "Otvori...", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("DecryptionWindow", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("DecryptionWindow", "Page", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DecryptionWindow: public Ui_DecryptionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DECRYPTIONWINDOW_H
