/****************************************************************************
** Meta object code from reading C++ file 'test12_6a.h'
**
** Created: Sat Sep 3 19:54:10 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../test12_6a.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test12_6a.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Test12_6A[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Test12_6A[] = {
    "Test12_6A\0"
};

const QMetaObject Test12_6A::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Test12_6A,
      qt_meta_data_Test12_6A, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Test12_6A::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Test12_6A::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Test12_6A::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Test12_6A))
        return static_cast<void*>(const_cast< Test12_6A*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Test12_6A::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
