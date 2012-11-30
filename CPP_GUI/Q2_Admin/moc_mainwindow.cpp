/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Thu Nov 29 23:25:08 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      35,   11,   11,   11, 0x08,
      61,   11,   11,   11, 0x08,
      81,   11,   11,   11, 0x08,
     108,   11,   11,   11, 0x08,
     128,   11,   11,   11, 0x08,
     146,   11,   11,   11, 0x08,
     163,   11,   11,   11, 0x08,
     181,   11,   11,   11, 0x08,
     223,  207,   11,   11, 0x08,
     252,   11,   11,   11, 0x08,
     278,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0btn_dbConnectOnClick()\0"
    "btn_dbDisconnectOnClick()\0btn_normanOnClick()\0"
    "cmb_tabellenIndexChanged()\0"
    "btn_deleteOnClick()\0btn_saveOnClick()\0"
    "btn_addOnClick()\0btn_editOnClick()\0"
    "btn_loadSettingsOnClick()\0commandId,error\0"
    "ftpCommandFinished(int,bool)\0"
    "btn_sendSettingsOnClick()\0"
    "btn_discardChangesOnClick()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->btn_dbConnectOnClick(); break;
        case 1: _t->btn_dbDisconnectOnClick(); break;
        case 2: _t->btn_normanOnClick(); break;
        case 3: _t->cmb_tabellenIndexChanged(); break;
        case 4: _t->btn_deleteOnClick(); break;
        case 5: _t->btn_saveOnClick(); break;
        case 6: _t->btn_addOnClick(); break;
        case 7: _t->btn_editOnClick(); break;
        case 8: _t->btn_loadSettingsOnClick(); break;
        case 9: _t->ftpCommandFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->btn_sendSettingsOnClick(); break;
        case 11: _t->btn_discardChangesOnClick(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
