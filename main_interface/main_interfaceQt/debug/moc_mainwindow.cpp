/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[14];
    char stringdata0[346];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 34), // "on_actionBase_de_donnees_trig..."
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 19), // "on_BtnStart_clicked"
QT_MOC_LITERAL(4, 67, 18), // "on_BtnStop_clicked"
QT_MOC_LITERAL(5, 86, 30), // "on_pushButtonGraphique_clicked"
QT_MOC_LITERAL(6, 117, 32), // "on_pushButtonCoefficient_clicked"
QT_MOC_LITERAL(7, 150, 25), // "on_pushButtonPort_clicked"
QT_MOC_LITERAL(8, 176, 27), // "on_spinBoxPort_valueChanged"
QT_MOC_LITERAL(9, 204, 34), // "on_comboBoxFreq_currentTextCh..."
QT_MOC_LITERAL(10, 239, 4), // "arg1"
QT_MOC_LITERAL(11, 244, 43), // "on_actionRelancerConnexionOsc..."
QT_MOC_LITERAL(12, 288, 35), // "on_pushButtonResetGraphique_c..."
QT_MOC_LITERAL(13, 324, 21) // "on_pushButton_clicked"

    },
    "MainWindow\0on_actionBase_de_donnees_triggered\0"
    "\0on_BtnStart_clicked\0on_BtnStop_clicked\0"
    "on_pushButtonGraphique_clicked\0"
    "on_pushButtonCoefficient_clicked\0"
    "on_pushButtonPort_clicked\0"
    "on_spinBoxPort_valueChanged\0"
    "on_comboBoxFreq_currentTextChanged\0"
    "arg1\0on_actionRelancerConnexionOscillo_triggered\0"
    "on_pushButtonResetGraphique_clicked\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    1,   76,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionBase_de_donnees_triggered(); break;
        case 1: _t->on_BtnStart_clicked(); break;
        case 2: _t->on_BtnStop_clicked(); break;
        case 3: _t->on_pushButtonGraphique_clicked(); break;
        case 4: _t->on_pushButtonCoefficient_clicked(); break;
        case 5: _t->on_pushButtonPort_clicked(); break;
        case 6: _t->on_spinBoxPort_valueChanged(); break;
        case 7: _t->on_comboBoxFreq_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_actionRelancerConnexionOscillo_triggered(); break;
        case 9: _t->on_pushButtonResetGraphique_clicked(); break;
        case 10: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
