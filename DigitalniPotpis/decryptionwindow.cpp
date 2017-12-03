#include "decryptionwindow.h"
#include "ui_decryptionwindow.h"


DecryptionWindow::DecryptionWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DecryptionWindow)
{
    ui->setupUi(this);
}

DecryptionWindow::~DecryptionWindow()
{
    delete ui;
}

void DecryptionWindow::on_btnFilePath_clicked()
{


    ui->txtFilePath->setText(this->DohvatiPutDatoteke());

    ui->txtSadrzajDatoteke->setPlainText(this->DohvatiSadrzajDatoteke());
}
