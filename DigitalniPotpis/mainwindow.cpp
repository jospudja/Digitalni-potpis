#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "decryptionwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    DecryptionWindow *decryptionWindow = new DecryptionWindow();
    this->setCentralWidget(decryptionWindow);


}

MainWindow::~MainWindow()
{
    delete ui;
}
