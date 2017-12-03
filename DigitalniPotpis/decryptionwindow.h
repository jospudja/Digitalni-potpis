#ifndef DECRYPTIONWINDOW_H
#define DECRYPTIONWINDOW_H

#include <QWidget>
#include "QFile.h"
#include "qfiledialog.h"
#include "qtextstream.h"

namespace Ui {
class DecryptionWindow;
}

class DecryptionWindow : public QWidget
{
    Q_OBJECT

public:
    explicit DecryptionWindow(QWidget *parent = 0);
    ~DecryptionWindow();

    QString DohvatiPutDatoteke(){
        FileName = new QString(QFileDialog::getOpenFileName(this, "Odaberite datoteku", "datoteke", Filter));
        return *FileName;
    }

    QString DohvatiSadrzajDatoteke(){

        File = new QFile(*FileName);
        File->open(QFile::ReadOnly | QFile::Text);
        QTextStream in(File);
        return in.readAll();
    }

private:
    const QString Filter = "Text files (*.txt)";
    QString *FileName;
    QFile *File;


private slots:
    void on_btnFilePath_clicked();






private:
    Ui::DecryptionWindow *ui;
};

#endif // DECRYPTIONWINDOW_H
