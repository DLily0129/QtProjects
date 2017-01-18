/****************************************************************************
** Meta object code from reading C++ file 'test5_3a.h'
**
** Created: Mon Jul 25 17:28:31 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../test5_3a.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test5_3a.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Test5_3A[] = {

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
      14,    9,   10,    9, 0x08,
      30,   24,   10,    9, 0x08,
      48,    9,   10,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Test5_3A[] = {
    "Test5_3A\0\0int\0OnbtnOK()\0index\0"
    "OnCbxChanged(int)\0OnbtnClosed()\0"
};

const QMetaObject Test5_3A::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Test5_3A,
      qt_meta_data_Test5_3A, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Test5_3A::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Test5_3A::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Test5_3A::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Test5_3A))
        return static_cast<void*>(const_cast< Test5_3A*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Test5_3A::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { int _r = OnbtnOK();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = OnCbxChanged((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = OnbtnClosed();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
