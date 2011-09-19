/****************************************************************************
** Meta object code from reading C++ file 'wydatnik.h'
**
** Created: Mon Sep 19 14:19:48 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wydatnik.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wydatnik.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Wydatnik[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   10,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,    9,    9,    9, 0x0a,
      55,    9,    9,    9, 0x0a,
      65,    9,    9,    9, 0x0a,
      79,    9,    9,    9, 0x0a,
      96,   94,    9,    9, 0x0a,
     116,   94,    9,    9, 0x0a,
     142,    9,    9,    9, 0x0a,
     164,    9,    9,    9, 0x0a,
     184,    9,    9,    9, 0x0a,
     198,    9,    9,    9, 0x0a,
     216,   10,    9,    9, 0x08,
     239,    9,    9,    9, 0x08,
     255,    9,    9,    9, 0x08,
     266,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Wydatnik[] = {
    "Wydatnik\0\0_connected\0changedConnection(bool)\0"
    "wyloguj()\0zaloguj()\0rejestracja()\0"
    "dodajWydatek()\0o\0ustawDate(QWidget*)\0"
    "RefreshData(Obserwowany*)\0"
    "zaznaczenie(QWidget*)\0ZapiszStan(QString)\0"
    "OdtworzStan()\0aktualizujSaldo()\0"
    "changeConnection(bool)\0zmienStan(bool)\0"
    "wyszukaj()\0edytuj()\0"
};

const QMetaObject Wydatnik::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Wydatnik,
      qt_meta_data_Wydatnik, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Wydatnik::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Wydatnik::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Wydatnik::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Wydatnik))
        return static_cast<void*>(const_cast< Wydatnik*>(this));
    if (!strcmp(_clname, "Obserwowany"))
        return static_cast< Obserwowany*>(const_cast< Wydatnik*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Wydatnik::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changedConnection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: wyloguj(); break;
        case 2: zaloguj(); break;
        case 3: rejestracja(); break;
        case 4: dodajWydatek(); break;
        case 5: ustawDate((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 6: RefreshData((*reinterpret_cast< Obserwowany*(*)>(_a[1]))); break;
        case 7: zaznaczenie((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 8: ZapiszStan((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: OdtworzStan(); break;
        case 10: aktualizujSaldo(); break;
        case 11: changeConnection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: zmienStan((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: wyszukaj(); break;
        case 14: edytuj(); break;
        default: ;
        }
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Wydatnik::changedConnection(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
