/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSWidgetENDCLASS = QtMocHelpers::stringData(
    "Widget",
    "generateHOTP",
    "",
    "secret",
    "counter",
    "storeOTP",
    "userId",
    "otp",
    "verifyOTP",
    "handleNewConnection",
    "onNewConnection",
    "onReadyRead",
    "onDisconnected",
    "appendToTextEdit",
    "message",
    "onGenerateOtpClicked",
    "generateRandomNumber",
    "updateUiWithOtpInfo",
    "randomNumber"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSWidgetENDCLASS_t {
    uint offsetsAndSizes[38];
    char stringdata0[7];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[8];
    char stringdata5[9];
    char stringdata6[7];
    char stringdata7[4];
    char stringdata8[10];
    char stringdata9[20];
    char stringdata10[16];
    char stringdata11[12];
    char stringdata12[15];
    char stringdata13[17];
    char stringdata14[8];
    char stringdata15[21];
    char stringdata16[21];
    char stringdata17[20];
    char stringdata18[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSWidgetENDCLASS_t qt_meta_stringdata_CLASSWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Widget"
        QT_MOC_LITERAL(7, 12),  // "generateHOTP"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 6),  // "secret"
        QT_MOC_LITERAL(28, 7),  // "counter"
        QT_MOC_LITERAL(36, 8),  // "storeOTP"
        QT_MOC_LITERAL(45, 6),  // "userId"
        QT_MOC_LITERAL(52, 3),  // "otp"
        QT_MOC_LITERAL(56, 9),  // "verifyOTP"
        QT_MOC_LITERAL(66, 19),  // "handleNewConnection"
        QT_MOC_LITERAL(86, 15),  // "onNewConnection"
        QT_MOC_LITERAL(102, 11),  // "onReadyRead"
        QT_MOC_LITERAL(114, 14),  // "onDisconnected"
        QT_MOC_LITERAL(129, 16),  // "appendToTextEdit"
        QT_MOC_LITERAL(146, 7),  // "message"
        QT_MOC_LITERAL(154, 20),  // "onGenerateOtpClicked"
        QT_MOC_LITERAL(175, 20),  // "generateRandomNumber"
        QT_MOC_LITERAL(196, 19),  // "updateUiWithOtpInfo"
        QT_MOC_LITERAL(216, 12)   // "randomNumber"
    },
    "Widget",
    "generateHOTP",
    "",
    "secret",
    "counter",
    "storeOTP",
    "userId",
    "otp",
    "verifyOTP",
    "handleNewConnection",
    "onNewConnection",
    "onReadyRead",
    "onDisconnected",
    "appendToTextEdit",
    "message",
    "onGenerateOtpClicked",
    "generateRandomNumber",
    "updateUiWithOtpInfo",
    "randomNumber"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   80,    2, 0x08,    1 /* Private */,
       5,    3,   85,    2, 0x08,    4 /* Private */,
       8,    2,   92,    2, 0x08,    8 /* Private */,
       9,    0,   97,    2, 0x08,   11 /* Private */,
      10,    0,   98,    2, 0x08,   12 /* Private */,
      11,    0,   99,    2, 0x08,   13 /* Private */,
      12,    0,  100,    2, 0x08,   14 /* Private */,
      13,    1,  101,    2, 0x08,   15 /* Private */,
      15,    0,  104,    2, 0x08,   17 /* Private */,
      16,    0,  105,    2, 0x08,   18 /* Private */,
      17,    2,  106,    2, 0x08,   19 /* Private */,

 // slots: parameters
    QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,    6,    7,    4,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,   18,

       0        // eod
};

Q_CONSTINIT const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Widget, std::true_type>,
        // method 'generateHOTP'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'storeOTP'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'verifyOTP'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'handleNewConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onNewConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'appendToTextEdit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onGenerateOtpClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'generateRandomNumber'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'updateUiWithOtpInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QString _r = _t->generateHOTP((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->storeOTP((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 2: { bool _r = _t->verifyOTP((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->handleNewConnection(); break;
        case 4: _t->onNewConnection(); break;
        case 5: _t->onReadyRead(); break;
        case 6: _t->onDisconnected(); break;
        case 7: _t->appendToTextEdit((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->onGenerateOtpClicked(); break;
        case 9: { QString _r = _t->generateRandomNumber();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->updateUiWithOtpInfo((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
