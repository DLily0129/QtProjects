/****************************************************************************
** Meta object code from reading C++ file 'test12_1a.h'
**
** Created: Sun Aug 28 14:05:00 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../test12_1a.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test12_1a.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Test12_1A[] = {

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
      15,   10,   11,   10, 0x08,
      28,   10,   11,   10, 0x08,
      39,   10,   11,   10, 0x08,
      53,   10,   11,   10, 0x08,
      68,   10,   11,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Test12_1A[] = {
    "Test12_1A\0\0int\0OnbtnAddIn()\0OnbtnAdd()\0"
    "OnbtnChange()\0OnbtnStartIn()\0"
    "OnbtnChangeOk()\0"
};

const QMetaObject Test12_1A::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Test12_1A,
      qt_meta_data_Test12_1A, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Test12_1A::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Test12_1A::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Test12_1A::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Test12_1A))
        return static_cast<void*>(const_cast< Test12_1A*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Test12_1A::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { int _r = OnbtnAddIn();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = OnbtnAdd();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = OnbtnChange();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = OnbtnStartIn();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = OnbtnChangeOk();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE