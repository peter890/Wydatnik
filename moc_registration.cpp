/****************************************************************************
** Meta object code from reading C++ file 'registration.h'
**
** Created: Thu Sep 22 10:44:57 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "registration.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'registration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Registration[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      26,   13,   13,   13, 0x08,
      40,   13,   35,   13, 0x08,
      52,   13,   35,   13, 0x08,
      65,   13,   35,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Registration[] = {
    "Registration\0\0rejestruj()\0anuluj()\0"
    "bool\0passwdCmp()\0checkEmail()\0"
    "checkLogin()\0"
};

const QMetaObject Registration::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Registration,
      qt_meta_data_Registration, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Registration::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Registration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Registration::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Registration))
        return static_cast<void*>(const_cast< Registration*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Registration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: rejestruj(); break;
        case 1: anuluj(); break;
        case 2: { bool _r = passwdCmp();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = checkEmail();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = checkLogin();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
