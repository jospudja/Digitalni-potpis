#ifndef KRIPTIRANJE_H
#define KRIPTIRANJE_H


#include <QCryptographicHash>
#include <Qt-AES-master/qaesencryption.h>

class Kriptiranje
{

public:

    explicit Kriptiranje();


    QByteArray AESKriptiranje(QString tekst, QString kljuc){
          return  QAESEncryption::Crypt(QAESEncryption::AES_256, QAESEncryption::CBC, tekst.toLocal8Bit(),  HashirajKljuc(kljuc), hashIV);
    }
    QByteArray AESDekriptiranje(QString tekst, QString kljuc){
         return QAESEncryption::Decrypt(QAESEncryption::AES_256, QAESEncryption::CBC, tekst.toLocal8Bit(),  HashirajKljuc(kljuc), hashIV);
    }



private:

    QByteArray HashirajKljuc(QString kljuc){
        return QCryptographicHash::hash(kljuc.toLocal8Bit(), QCryptographicHash::Sha256);
    }

    QString iv = "your-IV-vector";
    QByteArray hashIV = QCryptographicHash::hash(iv.toLocal8Bit(), QCryptographicHash::Sha256);




};


#endif // KRIPTIRANJE_H
