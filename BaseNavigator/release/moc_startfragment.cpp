/****************************************************************************
** Meta object code from reading C++ file 'startfragment.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "E:/Downloads/Infinity_Games-master (1)/Infinity_Games-master/BaseNavigator/startfragment.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'startfragment.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StartFragment_t {
    QByteArrayData data[3];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StartFragment_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StartFragment_t qt_meta_stringdata_StartFragment = {
    {
QT_MOC_LITERAL(0, 0, 13), // "StartFragment"
QT_MOC_LITERAL(1, 14, 12), // "StartNewGame"
QT_MOC_LITERAL(2, 27, 0) // ""

    },
    "StartFragment\0StartNewGame\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StartFragment[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void StartFragment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StartFragment *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->StartNewGame(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StartFragment::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseFragment::staticMetaObject>(),
    qt_meta_stringdata_StartFragment.data,
    qt_meta_data_StartFragment,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StartFragment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StartFragment::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StartFragment.stringdata0))
        return static_cast<void*>(this);
    return BaseFragment::qt_metacast(_clname);
}

int StartFragment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseFragment::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
