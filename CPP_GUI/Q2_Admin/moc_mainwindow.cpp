/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sat Dec 8 19:12:24 2012
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
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      35,   11,   11,   11, 0x08,
      61,   11,   11,   11, 0x08,
      88,   11,   11,   11, 0x08,
     108,   11,   11,   11, 0x08,
     126,   11,   11,   11, 0x08,
     143,   11,   11,   11, 0x08,
     161,   11,   11,   11, 0x08,
     187,   11,   11,   11, 0x08,
     230,  214,   11,   11, 0x08,
     261,  259,   11,   11, 0x08,
     303,   11,   11,   11, 0x08,
     329,   11,   11,   11, 0x08,
     357,   11,   11,   11, 0x08,
     377,   11,   11,   11, 0x08,
     397,   11,   11,   11, 0x08,
     420,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0btn_dbConnectOnClick()\0"
    "btn_dbDisconnectOnClick()\0"
    "cmb_tabellenIndexChanged()\0"
    "btn_deleteOnClick()\0btn_saveOnClick()\0"
    "btn_addOnClick()\0btn_editOnClick()\0"
    "btn_loadSettingsOnClick()\0"
    "btn_ftpDisconnectOnClick()\0commandId,error\0"
    "ftpCommandFinished(int,bool)\0,\0"
    "updateDataTransferProgress(qint64,qint64)\0"
    "btn_sendSettingsOnClick()\0"
    "btn_discardChangesOnClick()\0"
    "actionExitOnClick()\0actionInfoOnClick()\0"
    "actionDeutschOnClick()\0actionEnglischOnClick()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->btn_dbConnectOnClick(); break;
        case 1: _t->btn_dbDisconnectOnClick(); break;
        case 2: _t->cmb_tabellenIndexChanged(); break;
        case 3: _t->btn_deleteOnClick(); break;
        case 4: _t->btn_saveOnClick(); break;
        case 5: _t->btn_addOnClick(); break;
        case 6: _t->btn_editOnClick(); break;
        case 7: _t->btn_loadSettingsOnClick(); break;
        case 8: _t->btn_ftpDisconnectOnClick(); break;
        case 9: _t->ftpCommandFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->updateDataTransferProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 11: _t->btn_sendSettingsOnClick(); break;
        case 12: _t->btn_discardChangesOnClick(); break;
        case 13: _t->actionExitOnClick(); break;
        case 14: _t->actionInfoOnClick(); break;
        case 15: _t->actionDeutschOnClick(); break;
        case 16: _t->actionEnglischOnClick(); break;
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
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
