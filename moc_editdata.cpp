/****************************************************************************
** Meta object code from reading C++ file 'editdata.h'
**
** Created: Mon Sep 19 18:55:21 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "editdata.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditData[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      17,    9,    9,    9, 0x08,
      28,    9,   23,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EditData[] = {
    "EditData\0\0edit()\0del()\0bool\0confirm()\0"
};

const QMetaObject EditData::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EditData,
      qt_meta_data_EditData, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditData))
        return static_cast<void*>(const_cast< EditData*>(this));
    return QWidget::qt_metacast(_clname);
}

int EditData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: edit(); break;
        case 1: del(); break;
        case 2: { bool _r = confirm();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
