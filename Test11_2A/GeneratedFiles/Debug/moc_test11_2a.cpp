/****************************************************************************
** Meta object code from reading C++ file 'test11_2a.h'
**
** Created: Thu Aug 18 12:24:54 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../test11_2a.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test11_2a.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Test11_2A[] = {

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
      15,   10,   11,   10, 0x08,
      27,   10,   11,   10, 0x08,
      41,   10,   11,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Test11_2A[] = {
    "Test11_2A\0\0int\0OnbtnRect()\0OnbtnCircle()\0"
    "OnbtnTriangle()\0"
};

const QMetaObject Test11_2A::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Test11_2A,
      qt_meta_data_Test11_2A, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Test11_2A::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Test11_2A::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Test11_2A::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Test11_2A))
        return static_cast<void*>(const_cast< Test11_2A*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Test11_2A::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { int _r = OnbtnRect();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = OnbtnCircle();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = OnbtnTriangle();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
