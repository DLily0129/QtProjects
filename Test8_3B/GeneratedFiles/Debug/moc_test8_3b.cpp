/****************************************************************************
** Meta object code from reading C++ file 'test8_3b.h'
**
** Created: Mon Aug 8 16:19:56 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../test8_3b.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test8_3b.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Test8_3B[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,    9,   10,    9, 0x08,
      28,    9,   10,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Test8_3B[] = {
    "Test8_3B\0\0int\0OnbtnSelect()\0OnbtnSend()\0"
};

const QMetaObject Test8_3B::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Test8_3B,
      qt_meta_data_Test8_3B, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Test8_3B::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Test8_3B::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Test8_3B::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Test8_3B))
        return static_cast<void*>(const_cast< Test8_3B*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Test8_3B::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { int _r = OnbtnSelect();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = OnbtnSend();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
