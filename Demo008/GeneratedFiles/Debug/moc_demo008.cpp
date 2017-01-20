/****************************************************************************
** Meta object code from reading C++ file 'demo008.h'
**
** Created: Mon Mar 14 09:49:35 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/demo008.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'demo008.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Demo008[] = {

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
      13,    8,    9,    8, 0x08,
      25,    8,    9,    8, 0x08,
      34,    8,    9,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Demo008[] = {
    "Demo008\0\0int\0onCapture()\0onSave()\0"
    "onDelayedCapture()\0"
};

const QMetaObject Demo008::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Demo008,
      qt_meta_data_Demo008, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Demo008::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Demo008::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Demo008::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Demo008))
        return static_cast<void*>(const_cast< Demo008*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Demo008::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { int _r = onCapture();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = onSave();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = onDelayedCapture();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
