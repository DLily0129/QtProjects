/****************************************************************************
** Meta object code from reading C++ file 'test5_5a.h'
**
** Created: Mon Aug 1 16:57:25 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../test5_5a.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test5_5a.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Test5_5A[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,    9,   10,    9, 0x08,
      27,    9,   10,    9, 0x08,
      41,    9,   10,    9, 0x08,
      55,    9,   10,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Test5_5A[] = {
    "Test5_5A\0\0int\0OnbtnClose()\0OnbtnSignIn()\0"
    "OnbtnPasswd()\0OnbtnRegister()\0"
};

const QMetaObject Test5_5A::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Test5_5A,
      qt_meta_data_Test5_5A, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Test5_5A::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Test5_5A::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Test5_5A::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Test5_5A))
        return static_cast<void*>(const_cast< Test5_5A*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Test5_5A::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { int _r = OnbtnClose();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = OnbtnSignIn();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = OnbtnPasswd();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = OnbtnRegister();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
