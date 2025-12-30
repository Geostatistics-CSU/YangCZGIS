/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[123];
    char stringdata0[1593];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 12), // "onActionOpen"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "onActionNew"
QT_MOC_LITERAL(4, 37, 12), // "onActionSave"
QT_MOC_LITERAL(5, 50, 14), // "onActionSaveAs"
QT_MOC_LITERAL(6, 65, 12), // "onActionExit"
QT_MOC_LITERAL(7, 78, 26), // "onActionImportShpTriggered"
QT_MOC_LITERAL(8, 105, 29), // "onActionOpen3DWindowTriggered"
QT_MOC_LITERAL(9, 135, 26), // "onActionImportXYZTriggered"
QT_MOC_LITERAL(10, 162, 13), // "onActionAbout"
QT_MOC_LITERAL(11, 176, 27), // "onSendSelected3DPathEmitted"
QT_MOC_LITERAL(12, 204, 4), // "path"
QT_MOC_LITERAL(13, 209, 26), // "onSendSelected3DLyrEmitted"
QT_MOC_LITERAL(14, 236, 7), // "lyrName"
QT_MOC_LITERAL(15, 244, 17), // "onActionHistogram"
QT_MOC_LITERAL(16, 262, 14), // "onActionQQPlot"
QT_MOC_LITERAL(17, 277, 15), // "onActionBoxPlot"
QT_MOC_LITERAL(18, 293, 11), // "onActionLog"
QT_MOC_LITERAL(19, 305, 13), // "onActionInLog"
QT_MOC_LITERAL(20, 319, 17), // "onActionCoAnalyse"
QT_MOC_LITERAL(21, 337, 20), // "onActionPanTriggered"
QT_MOC_LITERAL(22, 358, 23), // "onActionZoomInTriggered"
QT_MOC_LITERAL(23, 382, 24), // "onActionZoomOutTriggered"
QT_MOC_LITERAL(24, 407, 25), // "onActionZoomFullTriggered"
QT_MOC_LITERAL(25, 433, 22), // "onActionUnsetTriggered"
QT_MOC_LITERAL(26, 456, 26), // "onActionShowTableTriggered"
QT_MOC_LITERAL(27, 483, 19), // "onActionFeatureInfo"
QT_MOC_LITERAL(28, 503, 22), // "onActionClearHighlight"
QT_MOC_LITERAL(29, 526, 17), // "onActionEmitPoint"
QT_MOC_LITERAL(30, 544, 19), // "onActionSelectPoint"
QT_MOC_LITERAL(31, 564, 20), // "onActionSelectVector"
QT_MOC_LITERAL(32, 585, 16), // "onActionSerchSQL"
QT_MOC_LITERAL(33, 602, 15), // "onCanvasRefresh"
QT_MOC_LITERAL(34, 618, 12), // "onMapRefresh"
QT_MOC_LITERAL(35, 631, 16), // "onClickSQLSearch"
QT_MOC_LITERAL(36, 648, 9), // "onGetPath"
QT_MOC_LITERAL(37, 658, 2), // "is"
QT_MOC_LITERAL(38, 661, 14), // "onImportResult"
QT_MOC_LITERAL(39, 676, 9), // "PyObject*"
QT_MOC_LITERAL(40, 686, 9), // "result_re"
QT_MOC_LITERAL(41, 696, 13), // "onEndProgress"
QT_MOC_LITERAL(42, 710, 15), // "onImportResultG"
QT_MOC_LITERAL(43, 726, 13), // "onNewProgress"
QT_MOC_LITERAL(44, 740, 4), // "name"
QT_MOC_LITERAL(45, 745, 9), // "onWaiting"
QT_MOC_LITERAL(46, 755, 15), // "onActionOYangCZ"
QT_MOC_LITERAL(47, 771, 21), // "onOYangCZParamsSended"
QT_MOC_LITERAL(48, 793, 13), // "QList<double>"
QT_MOC_LITERAL(49, 807, 13), // "observed_data"
QT_MOC_LITERAL(50, 821, 14), // "QList<ObPtXYZ>"
QT_MOC_LITERAL(51, 836, 5), // "obpts"
QT_MOC_LITERAL(52, 842, 8), // "un_obpts"
QT_MOC_LITERAL(53, 851, 1), // "c"
QT_MOC_LITERAL(54, 853, 1), // "k"
QT_MOC_LITERAL(55, 855, 3), // "dim"
QT_MOC_LITERAL(56, 859, 10), // "outputPath"
QT_MOC_LITERAL(57, 870, 1), // "e"
QT_MOC_LITERAL(58, 872, 5), // "islog"
QT_MOC_LITERAL(59, 878, 5), // "isTIF"
QT_MOC_LITERAL(60, 884, 12), // "onNewOYangCZ"
QT_MOC_LITERAL(61, 897, 15), // "onActionYangCZF"
QT_MOC_LITERAL(62, 913, 21), // "onYangCZFParamsSended"
QT_MOC_LITERAL(63, 935, 12), // "onNewYangCZF"
QT_MOC_LITERAL(64, 948, 15), // "onActionGYangCZ"
QT_MOC_LITERAL(65, 964, 21), // "onGYangCZParamsSended"
QT_MOC_LITERAL(66, 986, 18), // "train_index_matrix"
QT_MOC_LITERAL(67, 1005, 17), // "test_index_matrix"
QT_MOC_LITERAL(68, 1023, 2), // "k2"
QT_MOC_LITERAL(69, 1026, 12), // "onNewGYangCZ"
QT_MOC_LITERAL(70, 1039, 16), // "onActionSTYangCZ"
QT_MOC_LITERAL(71, 1056, 22), // "onSTYangCZParamsSended"
QT_MOC_LITERAL(72, 1079, 21), // "QList<QList<double> >"
QT_MOC_LITERAL(73, 1101, 3), // "c_s"
QT_MOC_LITERAL(74, 1105, 3), // "c_t"
QT_MOC_LITERAL(75, 1109, 3), // "k_s"
QT_MOC_LITERAL(76, 1113, 3), // "k_t"
QT_MOC_LITERAL(77, 1117, 13), // "onNewSTYangCZ"
QT_MOC_LITERAL(78, 1131, 16), // "onActionCoYangCZ"
QT_MOC_LITERAL(79, 1148, 22), // "onCoYangCZParamsSended"
QT_MOC_LITERAL(80, 1171, 16), // "co_observed_data"
QT_MOC_LITERAL(81, 1188, 8), // "co_obpts"
QT_MOC_LITERAL(82, 1197, 6), // "c_list"
QT_MOC_LITERAL(83, 1204, 4), // "n_co"
QT_MOC_LITERAL(84, 1209, 8), // "isnugget"
QT_MOC_LITERAL(85, 1218, 13), // "onNewCoYangCZ"
QT_MOC_LITERAL(86, 1232, 15), // "onActionAmoebaG"
QT_MOC_LITERAL(87, 1248, 21), // "onAmoebaGParamsSended"
QT_MOC_LITERAL(88, 1270, 6), // "length"
QT_MOC_LITERAL(89, 1277, 7), // "neiPath"
QT_MOC_LITERAL(90, 1285, 6), // "id_sep"
QT_MOC_LITERAL(91, 1292, 6), // "is_nei"
QT_MOC_LITERAL(92, 1299, 11), // "Significant"
QT_MOC_LITERAL(93, 1311, 10), // "repeat_num"
QT_MOC_LITERAL(94, 1322, 11), // "onNewAmoeba"
QT_MOC_LITERAL(95, 1334, 15), // "onActionHTMSCAN"
QT_MOC_LITERAL(96, 1350, 21), // "onHTMSCANParamsSended"
QT_MOC_LITERAL(97, 1372, 12), // "onNewHtmscan"
QT_MOC_LITERAL(98, 1385, 20), // "onActionRuleYangCZXY"
QT_MOC_LITERAL(99, 1406, 23), // "onYangCZFXYParamsSended"
QT_MOC_LITERAL(100, 1430, 3), // "r_d"
QT_MOC_LITERAL(101, 1434, 3), // "c_d"
QT_MOC_LITERAL(102, 1438, 19), // "onActionTransformXY"
QT_MOC_LITERAL(103, 1458, 14), // "onActionAmount"
QT_MOC_LITERAL(104, 1473, 20), // "onAmountParamsSended"
QT_MOC_LITERAL(105, 1494, 8), // "obPt_val"
QT_MOC_LITERAL(106, 1503, 7), // "obPts_c"
QT_MOC_LITERAL(107, 1511, 10), // "un_obPts_c"
QT_MOC_LITERAL(108, 1522, 2), // "kr"
QT_MOC_LITERAL(109, 1525, 3), // "l_r"
QT_MOC_LITERAL(110, 1529, 3), // "l_c"
QT_MOC_LITERAL(111, 1533, 3), // "n_r"
QT_MOC_LITERAL(112, 1537, 3), // "n_c"
QT_MOC_LITERAL(113, 1541, 2), // "dz"
QT_MOC_LITERAL(114, 1544, 2), // "pa"
QT_MOC_LITERAL(115, 1547, 2), // "pb"
QT_MOC_LITERAL(116, 1550, 2), // "pc"
QT_MOC_LITERAL(117, 1553, 7), // "outpath"
QT_MOC_LITERAL(118, 1561, 5), // "error"
QT_MOC_LITERAL(119, 1567, 2), // "X0"
QT_MOC_LITERAL(120, 1570, 2), // "Y0"
QT_MOC_LITERAL(121, 1573, 3), // "A_0"
QT_MOC_LITERAL(122, 1577, 15) // "onImport_Amount"

    },
    "MainWindow\0onActionOpen\0\0onActionNew\0"
    "onActionSave\0onActionSaveAs\0onActionExit\0"
    "onActionImportShpTriggered\0"
    "onActionOpen3DWindowTriggered\0"
    "onActionImportXYZTriggered\0onActionAbout\0"
    "onSendSelected3DPathEmitted\0path\0"
    "onSendSelected3DLyrEmitted\0lyrName\0"
    "onActionHistogram\0onActionQQPlot\0"
    "onActionBoxPlot\0onActionLog\0onActionInLog\0"
    "onActionCoAnalyse\0onActionPanTriggered\0"
    "onActionZoomInTriggered\0"
    "onActionZoomOutTriggered\0"
    "onActionZoomFullTriggered\0"
    "onActionUnsetTriggered\0"
    "onActionShowTableTriggered\0"
    "onActionFeatureInfo\0onActionClearHighlight\0"
    "onActionEmitPoint\0onActionSelectPoint\0"
    "onActionSelectVector\0onActionSerchSQL\0"
    "onCanvasRefresh\0onMapRefresh\0"
    "onClickSQLSearch\0onGetPath\0is\0"
    "onImportResult\0PyObject*\0result_re\0"
    "onEndProgress\0onImportResultG\0"
    "onNewProgress\0name\0onWaiting\0"
    "onActionOYangCZ\0onOYangCZParamsSended\0"
    "QList<double>\0observed_data\0QList<ObPtXYZ>\0"
    "obpts\0un_obpts\0c\0k\0dim\0outputPath\0e\0"
    "islog\0isTIF\0onNewOYangCZ\0onActionYangCZF\0"
    "onYangCZFParamsSended\0onNewYangCZF\0"
    "onActionGYangCZ\0onGYangCZParamsSended\0"
    "train_index_matrix\0test_index_matrix\0"
    "k2\0onNewGYangCZ\0onActionSTYangCZ\0"
    "onSTYangCZParamsSended\0QList<QList<double> >\0"
    "c_s\0c_t\0k_s\0k_t\0onNewSTYangCZ\0"
    "onActionCoYangCZ\0onCoYangCZParamsSended\0"
    "co_observed_data\0co_obpts\0c_list\0n_co\0"
    "isnugget\0onNewCoYangCZ\0onActionAmoebaG\0"
    "onAmoebaGParamsSended\0length\0neiPath\0"
    "id_sep\0is_nei\0Significant\0repeat_num\0"
    "onNewAmoeba\0onActionHTMSCAN\0"
    "onHTMSCANParamsSended\0onNewHtmscan\0"
    "onActionRuleYangCZXY\0onYangCZFXYParamsSended\0"
    "r_d\0c_d\0onActionTransformXY\0onActionAmount\0"
    "onAmountParamsSended\0obPt_val\0obPts_c\0"
    "un_obPts_c\0kr\0l_r\0l_c\0n_r\0n_c\0dz\0pa\0"
    "pb\0pc\0outpath\0error\0X0\0Y0\0A_0\0"
    "onImport_Amount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      65,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  339,    2, 0x08 /* Private */,
       3,    0,  340,    2, 0x08 /* Private */,
       4,    0,  341,    2, 0x08 /* Private */,
       5,    0,  342,    2, 0x08 /* Private */,
       6,    0,  343,    2, 0x08 /* Private */,
       7,    0,  344,    2, 0x08 /* Private */,
       8,    0,  345,    2, 0x08 /* Private */,
       9,    0,  346,    2, 0x08 /* Private */,
      10,    0,  347,    2, 0x08 /* Private */,
      11,    1,  348,    2, 0x08 /* Private */,
      13,    1,  351,    2, 0x08 /* Private */,
      15,    0,  354,    2, 0x08 /* Private */,
      16,    0,  355,    2, 0x08 /* Private */,
      17,    0,  356,    2, 0x08 /* Private */,
      18,    0,  357,    2, 0x08 /* Private */,
      19,    0,  358,    2, 0x08 /* Private */,
      20,    0,  359,    2, 0x08 /* Private */,
      21,    0,  360,    2, 0x08 /* Private */,
      22,    0,  361,    2, 0x08 /* Private */,
      23,    0,  362,    2, 0x08 /* Private */,
      24,    0,  363,    2, 0x08 /* Private */,
      25,    0,  364,    2, 0x08 /* Private */,
      26,    0,  365,    2, 0x08 /* Private */,
      27,    0,  366,    2, 0x08 /* Private */,
      28,    0,  367,    2, 0x08 /* Private */,
      29,    0,  368,    2, 0x08 /* Private */,
      30,    0,  369,    2, 0x08 /* Private */,
      31,    0,  370,    2, 0x08 /* Private */,
      32,    0,  371,    2, 0x08 /* Private */,
      33,    0,  372,    2, 0x08 /* Private */,
      34,    0,  373,    2, 0x08 /* Private */,
      35,    0,  374,    2, 0x08 /* Private */,
      36,    2,  375,    2, 0x08 /* Private */,
      38,    1,  380,    2, 0x08 /* Private */,
      41,    1,  383,    2, 0x08 /* Private */,
      42,    1,  386,    2, 0x08 /* Private */,
      43,    1,  389,    2, 0x08 /* Private */,
      45,    0,  392,    2, 0x08 /* Private */,
      46,    0,  393,    2, 0x08 /* Private */,
      47,   10,  394,    2, 0x08 /* Private */,
      60,    0,  415,    2, 0x08 /* Private */,
      61,    0,  416,    2, 0x08 /* Private */,
      62,    5,  417,    2, 0x08 /* Private */,
      63,    0,  428,    2, 0x08 /* Private */,
      64,    0,  429,    2, 0x08 /* Private */,
      65,   13,  430,    2, 0x08 /* Private */,
      69,    0,  457,    2, 0x08 /* Private */,
      70,    0,  458,    2, 0x08 /* Private */,
      71,    9,  459,    2, 0x08 /* Private */,
      77,    0,  478,    2, 0x08 /* Private */,
      78,    0,  479,    2, 0x08 /* Private */,
      79,   13,  480,    2, 0x08 /* Private */,
      85,    0,  507,    2, 0x08 /* Private */,
      86,    0,  508,    2, 0x08 /* Private */,
      87,   10,  509,    2, 0x08 /* Private */,
      94,    0,  530,    2, 0x08 /* Private */,
      95,    0,  531,    2, 0x08 /* Private */,
      96,   10,  532,    2, 0x08 /* Private */,
      97,    0,  553,    2, 0x08 /* Private */,
      98,    0,  554,    2, 0x08 /* Private */,
      99,    6,  555,    2, 0x08 /* Private */,
     102,    0,  568,    2, 0x08 /* Private */,
     103,    0,  569,    2, 0x08 /* Private */,
     104,   19,  570,    2, 0x08 /* Private */,
     122,    1,  609,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   12,   37,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void, QMetaType::QString,   44,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 48, 0x80000000 | 50, 0x80000000 | 50, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   49,   51,   52,   53,   54,   55,   56,   57,   58,   59,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 48, 0x80000000 | 50, QMetaType::Int, QMetaType::Int, QMetaType::QString,   49,   51,   54,   55,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 48, 0x80000000 | 50, 0x80000000 | 48, 0x80000000 | 48, 0x80000000 | 50, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   49,   51,   66,   67,   52,   53,   54,   68,   55,   56,   57,   58,   59,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 72, 0x80000000 | 50, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Bool,   49,   51,   73,   74,   75,   76,   55,   56,   58,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 48, 0x80000000 | 50, 0x80000000 | 50, 0x80000000 | 50, 0x80000000 | 50, 0x80000000 | 48, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   49,   80,   51,   81,   52,   82,   54,   55,   83,   56,   84,   58,   59,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 48, 0x80000000 | 50, QMetaType::Double, QMetaType::QString, QMetaType::Int, QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Double, QMetaType::Int,   49,   51,   88,   89,   90,   91,   56,   55,   92,   93,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 48, 0x80000000 | 50, QMetaType::Double, QMetaType::QString, QMetaType::Int, QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Double, QMetaType::Int,   49,   51,   88,   89,   90,   91,   56,   55,   92,   93,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 72, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int,   49,  100,  101,   53,   54,   55,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 48, 0x80000000 | 50, 0x80000000 | 50, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::QString, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double,  105,  106,  107,   53,   54,  108,  109,  110,  111,  112,  113,  114,  115,  116,  117,  118,  119,  120,  121,
    QMetaType::Void, 0x80000000 | 39,   40,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->onActionOpen();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->onActionNew();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->onActionSave();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->onActionSaveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->onActionExit();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->onActionImportShpTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->onActionOpen3DWindowTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->onActionImportXYZTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->onActionAbout();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->onSendSelected3DPathEmitted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->onSendSelected3DLyrEmitted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->onActionHistogram(); break;
        case 12: _t->onActionQQPlot(); break;
        case 13: _t->onActionBoxPlot(); break;
        case 14: _t->onActionLog(); break;
        case 15: _t->onActionInLog(); break;
        case 16: _t->onActionCoAnalyse(); break;
        case 17: _t->onActionPanTriggered(); break;
        case 18: _t->onActionZoomInTriggered(); break;
        case 19: _t->onActionZoomOutTriggered(); break;
        case 20: _t->onActionZoomFullTriggered(); break;
        case 21: _t->onActionUnsetTriggered(); break;
        case 22: _t->onActionShowTableTriggered(); break;
        case 23: _t->onActionFeatureInfo(); break;
        case 24: _t->onActionClearHighlight(); break;
        case 25: _t->onActionEmitPoint(); break;
        case 26: _t->onActionSelectPoint(); break;
        case 27: _t->onActionSelectVector(); break;
        case 28: _t->onActionSerchSQL(); break;
        case 29: _t->onCanvasRefresh(); break;
        case 30: _t->onMapRefresh(); break;
        case 31: _t->onClickSQLSearch(); break;
        case 32: _t->onGetPath((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 33: _t->onImportResult((*reinterpret_cast< PyObject*(*)>(_a[1]))); break;
        case 34: _t->onEndProgress((*reinterpret_cast< PyObject*(*)>(_a[1]))); break;
        case 35: _t->onImportResultG((*reinterpret_cast< PyObject*(*)>(_a[1]))); break;
        case 36: _t->onNewProgress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 37: _t->onWaiting(); break;
        case 38: _t->onActionOYangCZ(); break;
        case 39: _t->onOYangCZParamsSended((*reinterpret_cast< QList<double>(*)>(_a[1])),(*reinterpret_cast< QList<ObPtXYZ>(*)>(_a[2])),(*reinterpret_cast< QList<ObPtXYZ>(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9])),(*reinterpret_cast< bool(*)>(_a[10]))); break;
        case 40: _t->onNewOYangCZ(); break;
        case 41: _t->onActionYangCZF(); break;
        case 42: _t->onYangCZFParamsSended((*reinterpret_cast< QList<double>(*)>(_a[1])),(*reinterpret_cast< QList<ObPtXYZ>(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 43: _t->onNewYangCZF(); break;
        case 44: _t->onActionGYangCZ(); break;
        case 45: _t->onGYangCZParamsSended((*reinterpret_cast< QList<double>(*)>(_a[1])),(*reinterpret_cast< QList<ObPtXYZ>(*)>(_a[2])),(*reinterpret_cast< QList<double>(*)>(_a[3])),(*reinterpret_cast< QList<double>(*)>(_a[4])),(*reinterpret_cast< QList<ObPtXYZ>(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< int(*)>(_a[9])),(*reinterpret_cast< QString(*)>(_a[10])),(*reinterpret_cast< bool(*)>(_a[11])),(*reinterpret_cast< bool(*)>(_a[12])),(*reinterpret_cast< bool(*)>(_a[13]))); break;
        case 46: _t->onNewGYangCZ(); break;
        case 47: _t->onActionSTYangCZ(); break;
        case 48: _t->onSTYangCZParamsSended((*reinterpret_cast< QList<QList<double> >(*)>(_a[1])),(*reinterpret_cast< QList<ObPtXYZ>(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 49: _t->onNewSTYangCZ(); break;
        case 50: _t->onActionCoYangCZ(); break;
        case 51: _t->onCoYangCZParamsSended((*reinterpret_cast< QList<double>(*)>(_a[1])),(*reinterpret_cast< QList<ObPtXYZ>(*)>(_a[2])),(*reinterpret_cast< QList<ObPtXYZ>(*)>(_a[3])),(*reinterpret_cast< QList<ObPtXYZ>(*)>(_a[4])),(*reinterpret_cast< QList<ObPtXYZ>(*)>(_a[5])),(*reinterpret_cast< QList<double>(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< int(*)>(_a[9])),(*reinterpret_cast< QString(*)>(_a[10])),(*reinterpret_cast< bool(*)>(_a[11])),(*reinterpret_cast< bool(*)>(_a[12])),(*reinterpret_cast< bool(*)>(_a[13]))); break;
        case 52: _t->onNewCoYangCZ(); break;
        case 53: _t->onActionAmoebaG(); break;
        case 54: _t->onAmoebaGParamsSended((*reinterpret_cast< QList<double>(*)>(_a[1])),(*reinterpret_cast< QList<ObPtXYZ>(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< int(*)>(_a[10]))); break;
        case 55: _t->onNewAmoeba(); break;
        case 56: _t->onActionHTMSCAN(); break;
        case 57: _t->onHTMSCANParamsSended((*reinterpret_cast< QList<double>(*)>(_a[1])),(*reinterpret_cast< QList<ObPtXYZ>(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< int(*)>(_a[10]))); break;
        case 58: _t->onNewHtmscan(); break;
        case 59: _t->onActionRuleYangCZXY(); break;
        case 60: _t->onYangCZFXYParamsSended((*reinterpret_cast< QList<QList<double> >(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 61: _t->onActionTransformXY(); break;
        case 62: _t->onActionAmount(); break;
        case 63: _t->onAmountParamsSended((*reinterpret_cast< QList<double>(*)>(_a[1])),(*reinterpret_cast< QList<ObPtXYZ>(*)>(_a[2])),(*reinterpret_cast< QList<ObPtXYZ>(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< int(*)>(_a[9])),(*reinterpret_cast< int(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11])),(*reinterpret_cast< double(*)>(_a[12])),(*reinterpret_cast< double(*)>(_a[13])),(*reinterpret_cast< double(*)>(_a[14])),(*reinterpret_cast< QString(*)>(_a[15])),(*reinterpret_cast< bool(*)>(_a[16])),(*reinterpret_cast< double(*)>(_a[17])),(*reinterpret_cast< double(*)>(_a[18])),(*reinterpret_cast< double(*)>(_a[19]))); break;
        case 64: _t->onImport_Amount((*reinterpret_cast< PyObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
            case 2:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QList<double> > >(); break;
            }
            break;
        case 51:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 5:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        case 54:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        case 57:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        case 60:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QList<double> > >(); break;
            }
            break;
        case 63:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 65)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 65;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 65)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 65;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
