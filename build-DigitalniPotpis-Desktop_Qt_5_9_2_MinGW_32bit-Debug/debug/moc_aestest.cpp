/****************************************************************************
** Meta object code from reading C++ file 'aestest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DigitalniPotpis/Qt-AES-master/unit_test/aestest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aestest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AesTest_t {
    QByteArrayData data[14];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AesTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AesTest_t qt_meta_stringdata_AesTest = {
    {
QT_MOC_LITERAL(0, 0, 7), // "AesTest"
QT_MOC_LITERAL(1, 8, 12), // "initTestCase"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 11), // "ECB128Crypt"
QT_MOC_LITERAL(4, 34, 13), // "ECB128Decrypt"
QT_MOC_LITERAL(5, 48, 11), // "ECB192Crypt"
QT_MOC_LITERAL(6, 60, 13), // "ECB192Decrypt"
QT_MOC_LITERAL(7, 74, 11), // "ECB256Crypt"
QT_MOC_LITERAL(8, 86, 13), // "ECB256Decrypt"
QT_MOC_LITERAL(9, 100, 12), // "ECB256String"
QT_MOC_LITERAL(10, 113, 11), // "CBC128Crypt"
QT_MOC_LITERAL(11, 125, 13), // "CBC128Decrypt"
QT_MOC_LITERAL(12, 139, 12), // "CFB256String"
QT_MOC_LITERAL(13, 152, 15) // "cleanupTestCase"

    },
    "AesTest\0initTestCase\0\0ECB128Crypt\0"
    "ECB128Decrypt\0ECB192Crypt\0ECB192Decrypt\0"
    "ECB256Crypt\0ECB256Decrypt\0ECB256String\0"
    "CBC128Crypt\0CBC128Decrypt\0CFB256String\0"
    "cleanupTestCase"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AesTest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AesTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AesTest *_t = static_cast<AesTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->ECB128Crypt(); break;
        case 2: _t->ECB128Decrypt(); break;
        case 3: _t->ECB192Crypt(); break;
        case 4: _t->ECB192Decrypt(); break;
        case 5: _t->ECB256Crypt(); break;
        case 6: _t->ECB256Decrypt(); break;
        case 7: _t->ECB256String(); break;
        case 8: _t->CBC128Crypt(); break;
        case 9: _t->CBC128Decrypt(); break;
        case 10: _t->CFB256String(); break;
        case 11: _t->cleanupTestCase(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AesTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AesTest.data,
      qt_meta_data_AesTest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AesTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AesTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AesTest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AesTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
