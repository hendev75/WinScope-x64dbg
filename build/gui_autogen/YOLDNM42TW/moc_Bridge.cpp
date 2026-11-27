/****************************************************************************
** Meta object code from reading C++ file 'Bridge.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Bridge/Bridge.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Bridge.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Bridge_t {
    QByteArrayData data[211];
    char stringdata0[2765];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Bridge_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Bridge_t qt_meta_stringdata_Bridge = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Bridge"
QT_MOC_LITERAL(1, 7, 13), // "disassembleAt"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "duint"
QT_MOC_LITERAL(4, 28, 2), // "va"
QT_MOC_LITERAL(5, 31, 3), // "eip"
QT_MOC_LITERAL(6, 35, 17), // "updateDisassembly"
QT_MOC_LITERAL(7, 53, 15), // "dbgStateChanged"
QT_MOC_LITERAL(8, 69, 8), // "DBGSTATE"
QT_MOC_LITERAL(9, 78, 5), // "state"
QT_MOC_LITERAL(10, 84, 11), // "addMsgToLog"
QT_MOC_LITERAL(11, 96, 3), // "msg"
QT_MOC_LITERAL(12, 100, 15), // "addMsgToLogHtml"
QT_MOC_LITERAL(13, 116, 8), // "clearLog"
QT_MOC_LITERAL(14, 125, 7), // "saveLog"
QT_MOC_LITERAL(15, 133, 13), // "saveLogToFile"
QT_MOC_LITERAL(16, 147, 4), // "file"
QT_MOC_LITERAL(17, 152, 15), // "redirectLogStop"
QT_MOC_LITERAL(18, 168, 17), // "redirectLogToFile"
QT_MOC_LITERAL(19, 186, 8), // "filename"
QT_MOC_LITERAL(20, 195, 5), // "close"
QT_MOC_LITERAL(21, 201, 15), // "updateRegisters"
QT_MOC_LITERAL(22, 217, 17), // "updateBreakpoints"
QT_MOC_LITERAL(23, 235, 17), // "updateWindowTitle"
QT_MOC_LITERAL(24, 253, 6), // "dumpAt"
QT_MOC_LITERAL(25, 260, 9), // "scriptAdd"
QT_MOC_LITERAL(26, 270, 5), // "count"
QT_MOC_LITERAL(27, 276, 12), // "const char**"
QT_MOC_LITERAL(28, 289, 5), // "lines"
QT_MOC_LITERAL(29, 295, 11), // "scriptClear"
QT_MOC_LITERAL(30, 307, 11), // "scriptSetIp"
QT_MOC_LITERAL(31, 319, 4), // "line"
QT_MOC_LITERAL(32, 324, 11), // "scriptError"
QT_MOC_LITERAL(33, 336, 7), // "message"
QT_MOC_LITERAL(34, 344, 14), // "scriptSetTitle"
QT_MOC_LITERAL(35, 359, 5), // "title"
QT_MOC_LITERAL(36, 365, 17), // "scriptSetInfoLine"
QT_MOC_LITERAL(37, 383, 4), // "info"
QT_MOC_LITERAL(38, 388, 13), // "scriptMessage"
QT_MOC_LITERAL(39, 402, 14), // "scriptQuestion"
QT_MOC_LITERAL(40, 417, 24), // "scriptEnableHighlighting"
QT_MOC_LITERAL(41, 442, 6), // "enable"
QT_MOC_LITERAL(42, 449, 16), // "updateSymbolList"
QT_MOC_LITERAL(43, 466, 12), // "module_count"
QT_MOC_LITERAL(44, 479, 17), // "SYMBOLMODULEINFO*"
QT_MOC_LITERAL(45, 497, 7), // "modules"
QT_MOC_LITERAL(46, 505, 17), // "addMsgToSymbolLog"
QT_MOC_LITERAL(47, 523, 14), // "clearSymbolLog"
QT_MOC_LITERAL(48, 538, 17), // "setSymbolProgress"
QT_MOC_LITERAL(49, 556, 8), // "progress"
QT_MOC_LITERAL(50, 565, 20), // "referenceAddColumnAt"
QT_MOC_LITERAL(51, 586, 5), // "width"
QT_MOC_LITERAL(52, 592, 20), // "referenceSetRowCount"
QT_MOC_LITERAL(53, 613, 23), // "referenceSetCellContent"
QT_MOC_LITERAL(54, 637, 1), // "r"
QT_MOC_LITERAL(55, 639, 1), // "c"
QT_MOC_LITERAL(56, 641, 1), // "s"
QT_MOC_LITERAL(57, 643, 19), // "referenceAddCommand"
QT_MOC_LITERAL(58, 663, 7), // "command"
QT_MOC_LITERAL(59, 671, 19), // "referenceReloadData"
QT_MOC_LITERAL(60, 691, 27), // "referenceSetSingleSelection"
QT_MOC_LITERAL(61, 719, 5), // "index"
QT_MOC_LITERAL(62, 725, 6), // "scroll"
QT_MOC_LITERAL(63, 732, 20), // "referenceSetProgress"
QT_MOC_LITERAL(64, 753, 31), // "referenceSetCurrentTaskProgress"
QT_MOC_LITERAL(65, 785, 9), // "taskTitle"
QT_MOC_LITERAL(66, 795, 26), // "referenceSetSearchStartCol"
QT_MOC_LITERAL(67, 822, 3), // "col"
QT_MOC_LITERAL(68, 826, 19), // "referenceInitialize"
QT_MOC_LITERAL(69, 846, 4), // "name"
QT_MOC_LITERAL(70, 851, 11), // "stackDumpAt"
QT_MOC_LITERAL(71, 863, 3), // "csp"
QT_MOC_LITERAL(72, 867, 10), // "updateDump"
QT_MOC_LITERAL(73, 878, 13), // "updateThreads"
QT_MOC_LITERAL(74, 892, 12), // "updateMemory"
QT_MOC_LITERAL(75, 905, 13), // "addRecentFile"
QT_MOC_LITERAL(76, 919, 16), // "setLastException"
QT_MOC_LITERAL(77, 936, 13), // "exceptionCode"
QT_MOC_LITERAL(78, 950, 17), // "menuAddMenuToList"
QT_MOC_LITERAL(79, 968, 8), // "QWidget*"
QT_MOC_LITERAL(80, 977, 6), // "parent"
QT_MOC_LITERAL(81, 984, 6), // "QMenu*"
QT_MOC_LITERAL(82, 991, 4), // "menu"
QT_MOC_LITERAL(83, 996, 11), // "GUIMENUTYPE"
QT_MOC_LITERAL(84, 1008, 5), // "hMenu"
QT_MOC_LITERAL(85, 1014, 11), // "hParentMenu"
QT_MOC_LITERAL(86, 1026, 11), // "menuAddMenu"
QT_MOC_LITERAL(87, 1038, 16), // "menuAddMenuEntry"
QT_MOC_LITERAL(88, 1055, 16), // "menuAddSeparator"
QT_MOC_LITERAL(89, 1072, 13), // "menuClearMenu"
QT_MOC_LITERAL(90, 1086, 5), // "erase"
QT_MOC_LITERAL(91, 1092, 19), // "menuRemoveMenuEntry"
QT_MOC_LITERAL(92, 1112, 10), // "hEntryMenu"
QT_MOC_LITERAL(93, 1123, 16), // "setIconMenuEntry"
QT_MOC_LITERAL(94, 1140, 6), // "hEntry"
QT_MOC_LITERAL(95, 1147, 4), // "icon"
QT_MOC_LITERAL(96, 1152, 11), // "setIconMenu"
QT_MOC_LITERAL(97, 1164, 19), // "setCheckedMenuEntry"
QT_MOC_LITERAL(98, 1184, 7), // "checked"
QT_MOC_LITERAL(99, 1192, 19), // "setVisibleMenuEntry"
QT_MOC_LITERAL(100, 1212, 7), // "visible"
QT_MOC_LITERAL(101, 1220, 14), // "setVisibleMenu"
QT_MOC_LITERAL(102, 1235, 16), // "setNameMenuEntry"
QT_MOC_LITERAL(103, 1252, 11), // "setNameMenu"
QT_MOC_LITERAL(104, 1264, 18), // "setHotkeyMenuEntry"
QT_MOC_LITERAL(105, 1283, 6), // "hotkey"
QT_MOC_LITERAL(106, 1290, 2), // "id"
QT_MOC_LITERAL(107, 1293, 18), // "selectionDisasmGet"
QT_MOC_LITERAL(108, 1312, 14), // "SELECTIONDATA*"
QT_MOC_LITERAL(109, 1327, 9), // "selection"
QT_MOC_LITERAL(110, 1337, 18), // "selectionDisasmSet"
QT_MOC_LITERAL(111, 1356, 20), // "const SELECTIONDATA*"
QT_MOC_LITERAL(112, 1377, 16), // "selectionDumpGet"
QT_MOC_LITERAL(113, 1394, 16), // "selectionDumpSet"
QT_MOC_LITERAL(114, 1411, 17), // "selectionStackGet"
QT_MOC_LITERAL(115, 1429, 17), // "selectionStackSet"
QT_MOC_LITERAL(116, 1447, 17), // "selectionGraphGet"
QT_MOC_LITERAL(117, 1465, 18), // "selectionMemmapGet"
QT_MOC_LITERAL(118, 1484, 18), // "selectionMemmapSet"
QT_MOC_LITERAL(119, 1503, 18), // "selectionSymmodGet"
QT_MOC_LITERAL(120, 1522, 19), // "selectionThreadsGet"
QT_MOC_LITERAL(121, 1542, 19), // "selectionThreadsSet"
QT_MOC_LITERAL(122, 1562, 12), // "getStrWindow"
QT_MOC_LITERAL(123, 1575, 8), // "QString*"
QT_MOC_LITERAL(124, 1584, 4), // "text"
QT_MOC_LITERAL(125, 1589, 18), // "autoCompleteAddCmd"
QT_MOC_LITERAL(126, 1608, 3), // "cmd"
QT_MOC_LITERAL(127, 1612, 18), // "autoCompleteDelCmd"
QT_MOC_LITERAL(128, 1631, 20), // "autoCompleteClearAll"
QT_MOC_LITERAL(129, 1652, 17), // "addMsgToStatusBar"
QT_MOC_LITERAL(130, 1670, 13), // "updateSideBar"
QT_MOC_LITERAL(131, 1684, 16), // "repaintTableView"
QT_MOC_LITERAL(132, 1701, 13), // "updatePatches"
QT_MOC_LITERAL(133, 1715, 15), // "updateCallStack"
QT_MOC_LITERAL(134, 1731, 14), // "updateSEHChain"
QT_MOC_LITERAL(135, 1746, 18), // "updateArgumentView"
QT_MOC_LITERAL(136, 1765, 20), // "symbolRefreshCurrent"
QT_MOC_LITERAL(137, 1786, 14), // "loadSourceFile"
QT_MOC_LITERAL(138, 1801, 4), // "path"
QT_MOC_LITERAL(139, 1806, 4), // "addr"
QT_MOC_LITERAL(140, 1811, 7), // "showCpu"
QT_MOC_LITERAL(141, 1819, 11), // "showThreads"
QT_MOC_LITERAL(142, 1831, 13), // "addQWidgetTab"
QT_MOC_LITERAL(143, 1845, 7), // "qWidget"
QT_MOC_LITERAL(144, 1853, 14), // "showQWidgetTab"
QT_MOC_LITERAL(145, 1868, 15), // "closeQWidgetTab"
QT_MOC_LITERAL(146, 1884, 18), // "executeOnGuiThread"
QT_MOC_LITERAL(147, 1903, 11), // "cbGuiThread"
QT_MOC_LITERAL(148, 1915, 8), // "userdata"
QT_MOC_LITERAL(149, 1924, 23), // "updateTimeWastedCounter"
QT_MOC_LITERAL(150, 1948, 14), // "setGlobalNotes"
QT_MOC_LITERAL(151, 1963, 14), // "getGlobalNotes"
QT_MOC_LITERAL(152, 1978, 16), // "setDebuggeeNotes"
QT_MOC_LITERAL(153, 1995, 16), // "getDebuggeeNotes"
QT_MOC_LITERAL(154, 2012, 7), // "dumpAtN"
QT_MOC_LITERAL(155, 2020, 14), // "displayWarning"
QT_MOC_LITERAL(156, 2035, 18), // "registerScriptLang"
QT_MOC_LITERAL(157, 2054, 15), // "SCRIPTTYPEINFO*"
QT_MOC_LITERAL(158, 2070, 20), // "unregisterScriptLang"
QT_MOC_LITERAL(159, 2091, 11), // "focusDisasm"
QT_MOC_LITERAL(160, 2103, 9), // "focusDump"
QT_MOC_LITERAL(161, 2113, 11), // "focusStruct"
QT_MOC_LITERAL(162, 2125, 10), // "focusStack"
QT_MOC_LITERAL(163, 2136, 10), // "focusGraph"
QT_MOC_LITERAL(164, 2147, 11), // "focusMemmap"
QT_MOC_LITERAL(165, 2159, 11), // "focusSymmod"
QT_MOC_LITERAL(166, 2171, 11), // "updateWatch"
QT_MOC_LITERAL(167, 2183, 9), // "loadGraph"
QT_MOC_LITERAL(168, 2193, 18), // "BridgeCFGraphList*"
QT_MOC_LITERAL(169, 2212, 5), // "graph"
QT_MOC_LITERAL(170, 2218, 7), // "graphAt"
QT_MOC_LITERAL(171, 2226, 11), // "updateGraph"
QT_MOC_LITERAL(172, 2238, 13), // "setLogEnabled"
QT_MOC_LITERAL(173, 2252, 7), // "enabled"
QT_MOC_LITERAL(174, 2260, 16), // "addFavouriteItem"
QT_MOC_LITERAL(175, 2277, 4), // "type"
QT_MOC_LITERAL(176, 2282, 11), // "description"
QT_MOC_LITERAL(177, 2294, 24), // "setFavouriteItemShortcut"
QT_MOC_LITERAL(178, 2319, 8), // "shortcut"
QT_MOC_LITERAL(179, 2328, 15), // "foldDisassembly"
QT_MOC_LITERAL(180, 2344, 9), // "startAddr"
QT_MOC_LITERAL(181, 2354, 6), // "length"
QT_MOC_LITERAL(182, 2361, 17), // "selectInMemoryMap"
QT_MOC_LITERAL(183, 2379, 13), // "getActiveView"
QT_MOC_LITERAL(184, 2393, 11), // "ACTIVEVIEW*"
QT_MOC_LITERAL(185, 2405, 10), // "activeView"
QT_MOC_LITERAL(186, 2416, 11), // "addInfoLine"
QT_MOC_LITERAL(187, 2428, 11), // "typeAddNode"
QT_MOC_LITERAL(188, 2440, 21), // "const TYPEDESCRIPTOR*"
QT_MOC_LITERAL(189, 2462, 9), // "typeClear"
QT_MOC_LITERAL(190, 2472, 16), // "typeUpdateWidget"
QT_MOC_LITERAL(191, 2489, 9), // "typeVisit"
QT_MOC_LITERAL(192, 2499, 8), // "typeName"
QT_MOC_LITERAL(193, 2508, 15), // "typeListUpdated"
QT_MOC_LITERAL(194, 2524, 16), // "closeApplication"
QT_MOC_LITERAL(195, 2541, 8), // "flushLog"
QT_MOC_LITERAL(196, 2550, 16), // "getDumpAttention"
QT_MOC_LITERAL(197, 2567, 13), // "openTraceFile"
QT_MOC_LITERAL(198, 2581, 8), // "fileName"
QT_MOC_LITERAL(199, 2590, 18), // "updateTraceBrowser"
QT_MOC_LITERAL(200, 2609, 18), // "symbolSelectModule"
QT_MOC_LITERAL(201, 2628, 4), // "base"
QT_MOC_LITERAL(202, 2633, 15), // "getCurrentGraph"
QT_MOC_LITERAL(203, 2649, 9), // "graphList"
QT_MOC_LITERAL(204, 2659, 14), // "showReferences"
QT_MOC_LITERAL(205, 2674, 14), // "gotoTraceIndex"
QT_MOC_LITERAL(206, 2689, 16), // "showTraceBrowser"
QT_MOC_LITERAL(207, 2706, 14), // "throttleUpdate"
QT_MOC_LITERAL(208, 2721, 6), // "GUIMSG"
QT_MOC_LITERAL(209, 2728, 18), // "throttleUpdateSlot"
QT_MOC_LITERAL(210, 2747, 17) // "configUpdatedSlot"

    },
    "Bridge\0disassembleAt\0\0duint\0va\0eip\0"
    "updateDisassembly\0dbgStateChanged\0"
    "DBGSTATE\0state\0addMsgToLog\0msg\0"
    "addMsgToLogHtml\0clearLog\0saveLog\0"
    "saveLogToFile\0file\0redirectLogStop\0"
    "redirectLogToFile\0filename\0close\0"
    "updateRegisters\0updateBreakpoints\0"
    "updateWindowTitle\0dumpAt\0scriptAdd\0"
    "count\0const char**\0lines\0scriptClear\0"
    "scriptSetIp\0line\0scriptError\0message\0"
    "scriptSetTitle\0title\0scriptSetInfoLine\0"
    "info\0scriptMessage\0scriptQuestion\0"
    "scriptEnableHighlighting\0enable\0"
    "updateSymbolList\0module_count\0"
    "SYMBOLMODULEINFO*\0modules\0addMsgToSymbolLog\0"
    "clearSymbolLog\0setSymbolProgress\0"
    "progress\0referenceAddColumnAt\0width\0"
    "referenceSetRowCount\0referenceSetCellContent\0"
    "r\0c\0s\0referenceAddCommand\0command\0"
    "referenceReloadData\0referenceSetSingleSelection\0"
    "index\0scroll\0referenceSetProgress\0"
    "referenceSetCurrentTaskProgress\0"
    "taskTitle\0referenceSetSearchStartCol\0"
    "col\0referenceInitialize\0name\0stackDumpAt\0"
    "csp\0updateDump\0updateThreads\0updateMemory\0"
    "addRecentFile\0setLastException\0"
    "exceptionCode\0menuAddMenuToList\0"
    "QWidget*\0parent\0QMenu*\0menu\0GUIMENUTYPE\0"
    "hMenu\0hParentMenu\0menuAddMenu\0"
    "menuAddMenuEntry\0menuAddSeparator\0"
    "menuClearMenu\0erase\0menuRemoveMenuEntry\0"
    "hEntryMenu\0setIconMenuEntry\0hEntry\0"
    "icon\0setIconMenu\0setCheckedMenuEntry\0"
    "checked\0setVisibleMenuEntry\0visible\0"
    "setVisibleMenu\0setNameMenuEntry\0"
    "setNameMenu\0setHotkeyMenuEntry\0hotkey\0"
    "id\0selectionDisasmGet\0SELECTIONDATA*\0"
    "selection\0selectionDisasmSet\0"
    "const SELECTIONDATA*\0selectionDumpGet\0"
    "selectionDumpSet\0selectionStackGet\0"
    "selectionStackSet\0selectionGraphGet\0"
    "selectionMemmapGet\0selectionMemmapSet\0"
    "selectionSymmodGet\0selectionThreadsGet\0"
    "selectionThreadsSet\0getStrWindow\0"
    "QString*\0text\0autoCompleteAddCmd\0cmd\0"
    "autoCompleteDelCmd\0autoCompleteClearAll\0"
    "addMsgToStatusBar\0updateSideBar\0"
    "repaintTableView\0updatePatches\0"
    "updateCallStack\0updateSEHChain\0"
    "updateArgumentView\0symbolRefreshCurrent\0"
    "loadSourceFile\0path\0addr\0showCpu\0"
    "showThreads\0addQWidgetTab\0qWidget\0"
    "showQWidgetTab\0closeQWidgetTab\0"
    "executeOnGuiThread\0cbGuiThread\0userdata\0"
    "updateTimeWastedCounter\0setGlobalNotes\0"
    "getGlobalNotes\0setDebuggeeNotes\0"
    "getDebuggeeNotes\0dumpAtN\0displayWarning\0"
    "registerScriptLang\0SCRIPTTYPEINFO*\0"
    "unregisterScriptLang\0focusDisasm\0"
    "focusDump\0focusStruct\0focusStack\0"
    "focusGraph\0focusMemmap\0focusSymmod\0"
    "updateWatch\0loadGraph\0BridgeCFGraphList*\0"
    "graph\0graphAt\0updateGraph\0setLogEnabled\0"
    "enabled\0addFavouriteItem\0type\0description\0"
    "setFavouriteItemShortcut\0shortcut\0"
    "foldDisassembly\0startAddr\0length\0"
    "selectInMemoryMap\0getActiveView\0"
    "ACTIVEVIEW*\0activeView\0addInfoLine\0"
    "typeAddNode\0const TYPEDESCRIPTOR*\0"
    "typeClear\0typeUpdateWidget\0typeVisit\0"
    "typeName\0typeListUpdated\0closeApplication\0"
    "flushLog\0getDumpAttention\0openTraceFile\0"
    "fileName\0updateTraceBrowser\0"
    "symbolSelectModule\0base\0getCurrentGraph\0"
    "graphList\0showReferences\0gotoTraceIndex\0"
    "showTraceBrowser\0throttleUpdate\0GUIMSG\0"
    "throttleUpdateSlot\0configUpdatedSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Bridge[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     134,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
     132,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  684,    2, 0x06 /* Public */,
       6,    0,  689,    2, 0x06 /* Public */,
       7,    1,  690,    2, 0x06 /* Public */,
      10,    1,  693,    2, 0x06 /* Public */,
      12,    1,  696,    2, 0x06 /* Public */,
      13,    0,  699,    2, 0x06 /* Public */,
      14,    0,  700,    2, 0x06 /* Public */,
      15,    1,  701,    2, 0x06 /* Public */,
      17,    0,  704,    2, 0x06 /* Public */,
      18,    1,  705,    2, 0x06 /* Public */,
      20,    0,  708,    2, 0x06 /* Public */,
      21,    0,  709,    2, 0x06 /* Public */,
      22,    0,  710,    2, 0x06 /* Public */,
      23,    1,  711,    2, 0x06 /* Public */,
      24,    1,  714,    2, 0x06 /* Public */,
      25,    2,  717,    2, 0x06 /* Public */,
      29,    0,  722,    2, 0x06 /* Public */,
      30,    1,  723,    2, 0x06 /* Public */,
      32,    2,  726,    2, 0x06 /* Public */,
      34,    1,  731,    2, 0x06 /* Public */,
      36,    2,  734,    2, 0x06 /* Public */,
      38,    1,  739,    2, 0x06 /* Public */,
      39,    1,  742,    2, 0x06 /* Public */,
      40,    1,  745,    2, 0x06 /* Public */,
      42,    2,  748,    2, 0x06 /* Public */,
      46,    1,  753,    2, 0x06 /* Public */,
      47,    0,  756,    2, 0x06 /* Public */,
      48,    1,  757,    2, 0x06 /* Public */,
      50,    2,  760,    2, 0x06 /* Public */,
      52,    1,  765,    2, 0x06 /* Public */,
      53,    3,  768,    2, 0x06 /* Public */,
      57,    2,  775,    2, 0x06 /* Public */,
      59,    0,  780,    2, 0x06 /* Public */,
      60,    2,  781,    2, 0x06 /* Public */,
      63,    1,  786,    2, 0x06 /* Public */,
      64,    2,  789,    2, 0x06 /* Public */,
      66,    1,  794,    2, 0x06 /* Public */,
      68,    1,  797,    2, 0x06 /* Public */,
      70,    2,  800,    2, 0x06 /* Public */,
      72,    0,  805,    2, 0x06 /* Public */,
      73,    0,  806,    2, 0x06 /* Public */,
      74,    0,  807,    2, 0x06 /* Public */,
      75,    1,  808,    2, 0x06 /* Public */,
      76,    1,  811,    2, 0x06 /* Public */,
      78,    4,  814,    2, 0x06 /* Public */,
      86,    2,  823,    2, 0x06 /* Public */,
      87,    2,  828,    2, 0x06 /* Public */,
      88,    1,  833,    2, 0x06 /* Public */,
      89,    2,  836,    2, 0x06 /* Public */,
      91,    1,  841,    2, 0x06 /* Public */,
      93,    2,  844,    2, 0x06 /* Public */,
      96,    2,  849,    2, 0x06 /* Public */,
      97,    2,  854,    2, 0x06 /* Public */,
      99,    2,  859,    2, 0x06 /* Public */,
     101,    2,  864,    2, 0x06 /* Public */,
     102,    2,  869,    2, 0x06 /* Public */,
     103,    2,  874,    2, 0x06 /* Public */,
     104,    3,  879,    2, 0x06 /* Public */,
     107,    1,  886,    2, 0x06 /* Public */,
     110,    1,  889,    2, 0x06 /* Public */,
     112,    1,  892,    2, 0x06 /* Public */,
     113,    1,  895,    2, 0x06 /* Public */,
     114,    1,  898,    2, 0x06 /* Public */,
     115,    1,  901,    2, 0x06 /* Public */,
     116,    1,  904,    2, 0x06 /* Public */,
     117,    1,  907,    2, 0x06 /* Public */,
     118,    1,  910,    2, 0x06 /* Public */,
     119,    1,  913,    2, 0x06 /* Public */,
     120,    1,  916,    2, 0x06 /* Public */,
     121,    1,  919,    2, 0x06 /* Public */,
     122,    2,  922,    2, 0x06 /* Public */,
     125,    1,  927,    2, 0x06 /* Public */,
     127,    1,  930,    2, 0x06 /* Public */,
     128,    0,  933,    2, 0x06 /* Public */,
     129,    1,  934,    2, 0x06 /* Public */,
     130,    0,  937,    2, 0x06 /* Public */,
     131,    0,  938,    2, 0x06 /* Public */,
     132,    0,  939,    2, 0x06 /* Public */,
     133,    0,  940,    2, 0x06 /* Public */,
     134,    0,  941,    2, 0x06 /* Public */,
     135,    0,  942,    2, 0x06 /* Public */,
     136,    0,  943,    2, 0x06 /* Public */,
     137,    2,  944,    2, 0x06 /* Public */,
     140,    0,  949,    2, 0x06 /* Public */,
     141,    0,  950,    2, 0x06 /* Public */,
     142,    1,  951,    2, 0x06 /* Public */,
     144,    1,  954,    2, 0x06 /* Public */,
     145,    1,  957,    2, 0x06 /* Public */,
     146,    2,  960,    2, 0x06 /* Public */,
     149,    0,  965,    2, 0x06 /* Public */,
     150,    1,  966,    2, 0x06 /* Public */,
     151,    1,  969,    2, 0x06 /* Public */,
     152,    1,  972,    2, 0x06 /* Public */,
     153,    1,  975,    2, 0x06 /* Public */,
     154,    2,  978,    2, 0x06 /* Public */,
     155,    2,  983,    2, 0x06 /* Public */,
     156,    1,  988,    2, 0x06 /* Public */,
     158,    1,  991,    2, 0x06 /* Public */,
     159,    0,  994,    2, 0x06 /* Public */,
     160,    0,  995,    2, 0x06 /* Public */,
     161,    0,  996,    2, 0x06 /* Public */,
     162,    0,  997,    2, 0x06 /* Public */,
     163,    0,  998,    2, 0x06 /* Public */,
     164,    0,  999,    2, 0x06 /* Public */,
     165,    0, 1000,    2, 0x06 /* Public */,
     166,    0, 1001,    2, 0x06 /* Public */,
     167,    2, 1002,    2, 0x06 /* Public */,
     170,    1, 1007,    2, 0x06 /* Public */,
     171,    0, 1010,    2, 0x06 /* Public */,
     172,    1, 1011,    2, 0x06 /* Public */,
     174,    3, 1014,    2, 0x06 /* Public */,
     177,    3, 1021,    2, 0x06 /* Public */,
     179,    2, 1028,    2, 0x06 /* Public */,
     182,    1, 1033,    2, 0x06 /* Public */,
     183,    1, 1036,    2, 0x06 /* Public */,
     186,    1, 1039,    2, 0x06 /* Public */,
     187,    2, 1042,    2, 0x06 /* Public */,
     189,    0, 1047,    2, 0x06 /* Public */,
     190,    0, 1048,    2, 0x06 /* Public */,
     191,    2, 1049,    2, 0x06 /* Public */,
     193,    0, 1054,    2, 0x06 /* Public */,
     194,    0, 1055,    2, 0x06 /* Public */,
     195,    0, 1056,    2, 0x06 /* Public */,
     196,    0, 1057,    2, 0x06 /* Public */,
     197,    1, 1058,    2, 0x06 /* Public */,
     199,    0, 1061,    2, 0x06 /* Public */,
     200,    1, 1062,    2, 0x06 /* Public */,
     202,    1, 1065,    2, 0x06 /* Public */,
     204,    0, 1068,    2, 0x06 /* Public */,
     205,    1, 1069,    2, 0x06 /* Public */,
     206,    0, 1072,    2, 0x06 /* Public */,
     207,    1, 1073,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
     209,    1, 1076,    2, 0x08 /* Private */,
     210,    0, 1079,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QByteArray,   11,
    QMetaType::Void, QMetaType::QByteArray,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 27,   26,   28,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   31,   33,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   31,   37,
    QMetaType::Void, QMetaType::QString,   33,
    QMetaType::Void, QMetaType::QString,   33,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 44,   43,   45,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   51,   35,
    QMetaType::Void, 0x80000000 | 3,   26,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   54,   55,   56,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   35,   58,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   61,   62,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   49,   65,
    QMetaType::Void, QMetaType::Int,   67,
    QMetaType::Void, QMetaType::QString,   69,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,   71,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::UInt,   77,
    QMetaType::Void, 0x80000000 | 79, 0x80000000 | 81, 0x80000000 | 83, QMetaType::Int,   80,   82,   84,   85,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   84,   35,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   84,   35,
    QMetaType::Void, QMetaType::Int,   84,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   84,   90,
    QMetaType::Void, QMetaType::Int,   92,
    QMetaType::Void, QMetaType::Int, QMetaType::QIcon,   94,   95,
    QMetaType::Void, QMetaType::Int, QMetaType::QIcon,   84,   95,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   94,   98,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   94,  100,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   84,  100,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   94,   69,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   84,   69,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,   94,  105,  106,
    QMetaType::Void, 0x80000000 | 108,  109,
    QMetaType::Void, 0x80000000 | 111,  109,
    QMetaType::Void, 0x80000000 | 108,  109,
    QMetaType::Void, 0x80000000 | 111,  109,
    QMetaType::Void, 0x80000000 | 108,  109,
    QMetaType::Void, 0x80000000 | 111,  109,
    QMetaType::Void, 0x80000000 | 108,  109,
    QMetaType::Void, 0x80000000 | 108,  109,
    QMetaType::Void, 0x80000000 | 111,  109,
    QMetaType::Void, 0x80000000 | 108,  109,
    QMetaType::Void, 0x80000000 | 108,  109,
    QMetaType::Void, 0x80000000 | 111,  109,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 123,   35,  124,
    QMetaType::Void, QMetaType::QString,  126,
    QMetaType::Void, QMetaType::QString,  126,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,  138,  139,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 79,  143,
    QMetaType::Void, 0x80000000 | 79,  143,
    QMetaType::Void, 0x80000000 | 79,  143,
    QMetaType::Void, QMetaType::VoidStar, QMetaType::VoidStar,  147,  148,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  124,
    QMetaType::Void, QMetaType::VoidStar,  124,
    QMetaType::Void, QMetaType::QString,  124,
    QMetaType::Void, QMetaType::VoidStar,  124,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,   61,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   35,  124,
    QMetaType::Void, 0x80000000 | 157,   37,
    QMetaType::Void, QMetaType::Int,  106,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 168, 0x80000000 | 3,  169,  139,
    QMetaType::Void, 0x80000000 | 3,  139,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  173,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,  175,   69,  176,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,  175,   69,  178,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,  180,  181,
    QMetaType::Void, 0x80000000 | 3,  139,
    QMetaType::Void, 0x80000000 | 184,  185,
    QMetaType::Void, QMetaType::QString,  124,
    QMetaType::Void, QMetaType::VoidStar, 0x80000000 | 188,   80,  175,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,  192,  139,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  198,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,  201,
    QMetaType::Void, 0x80000000 | 168,  203,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   61,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 208,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 208,   11,
    QMetaType::Void,

       0        // eod
};

void Bridge::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Bridge *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->disassembleAt((*reinterpret_cast< duint(*)>(_a[1])),(*reinterpret_cast< duint(*)>(_a[2]))); break;
        case 1: _t->updateDisassembly(); break;
        case 2: _t->dbgStateChanged((*reinterpret_cast< DBGSTATE(*)>(_a[1]))); break;
        case 3: _t->addMsgToLog((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 4: _t->addMsgToLogHtml((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 5: _t->clearLog(); break;
        case 6: _t->saveLog(); break;
        case 7: _t->saveLogToFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->redirectLogStop(); break;
        case 9: _t->redirectLogToFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->close(); break;
        case 11: _t->updateRegisters(); break;
        case 12: _t->updateBreakpoints(); break;
        case 13: _t->updateWindowTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->dumpAt((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 15: _t->scriptAdd((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const char**(*)>(_a[2]))); break;
        case 16: _t->scriptClear(); break;
        case 17: _t->scriptSetIp((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->scriptError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 19: _t->scriptSetTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->scriptSetInfoLine((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 21: _t->scriptMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->scriptQuestion((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->scriptEnableHighlighting((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->updateSymbolList((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< SYMBOLMODULEINFO*(*)>(_a[2]))); break;
        case 25: _t->addMsgToSymbolLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: _t->clearSymbolLog(); break;
        case 27: _t->setSymbolProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->referenceAddColumnAt((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 29: _t->referenceSetRowCount((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 30: _t->referenceSetCellContent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 31: _t->referenceAddCommand((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 32: _t->referenceReloadData(); break;
        case 33: _t->referenceSetSingleSelection((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 34: _t->referenceSetProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->referenceSetCurrentTaskProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 36: _t->referenceSetSearchStartCol((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->referenceInitialize((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 38: _t->stackDumpAt((*reinterpret_cast< duint(*)>(_a[1])),(*reinterpret_cast< duint(*)>(_a[2]))); break;
        case 39: _t->updateDump(); break;
        case 40: _t->updateThreads(); break;
        case 41: _t->updateMemory(); break;
        case 42: _t->addRecentFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 43: _t->setLastException((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 44: _t->menuAddMenuToList((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QMenu*(*)>(_a[2])),(*reinterpret_cast< GUIMENUTYPE(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 45: _t->menuAddMenu((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 46: _t->menuAddMenuEntry((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 47: _t->menuAddSeparator((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->menuClearMenu((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 49: _t->menuRemoveMenuEntry((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->setIconMenuEntry((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QIcon(*)>(_a[2]))); break;
        case 51: _t->setIconMenu((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QIcon(*)>(_a[2]))); break;
        case 52: _t->setCheckedMenuEntry((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 53: _t->setVisibleMenuEntry((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 54: _t->setVisibleMenu((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 55: _t->setNameMenuEntry((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 56: _t->setNameMenu((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 57: _t->setHotkeyMenuEntry((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 58: _t->selectionDisasmGet((*reinterpret_cast< SELECTIONDATA*(*)>(_a[1]))); break;
        case 59: _t->selectionDisasmSet((*reinterpret_cast< const SELECTIONDATA*(*)>(_a[1]))); break;
        case 60: _t->selectionDumpGet((*reinterpret_cast< SELECTIONDATA*(*)>(_a[1]))); break;
        case 61: _t->selectionDumpSet((*reinterpret_cast< const SELECTIONDATA*(*)>(_a[1]))); break;
        case 62: _t->selectionStackGet((*reinterpret_cast< SELECTIONDATA*(*)>(_a[1]))); break;
        case 63: _t->selectionStackSet((*reinterpret_cast< const SELECTIONDATA*(*)>(_a[1]))); break;
        case 64: _t->selectionGraphGet((*reinterpret_cast< SELECTIONDATA*(*)>(_a[1]))); break;
        case 65: _t->selectionMemmapGet((*reinterpret_cast< SELECTIONDATA*(*)>(_a[1]))); break;
        case 66: _t->selectionMemmapSet((*reinterpret_cast< const SELECTIONDATA*(*)>(_a[1]))); break;
        case 67: _t->selectionSymmodGet((*reinterpret_cast< SELECTIONDATA*(*)>(_a[1]))); break;
        case 68: _t->selectionThreadsGet((*reinterpret_cast< SELECTIONDATA*(*)>(_a[1]))); break;
        case 69: _t->selectionThreadsSet((*reinterpret_cast< const SELECTIONDATA*(*)>(_a[1]))); break;
        case 70: _t->getStrWindow((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2]))); break;
        case 71: _t->autoCompleteAddCmd((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 72: _t->autoCompleteDelCmd((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 73: _t->autoCompleteClearAll(); break;
        case 74: _t->addMsgToStatusBar((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 75: _t->updateSideBar(); break;
        case 76: _t->repaintTableView(); break;
        case 77: _t->updatePatches(); break;
        case 78: _t->updateCallStack(); break;
        case 79: _t->updateSEHChain(); break;
        case 80: _t->updateArgumentView(); break;
        case 81: _t->symbolRefreshCurrent(); break;
        case 82: _t->loadSourceFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< duint(*)>(_a[2]))); break;
        case 83: _t->showCpu(); break;
        case 84: _t->showThreads(); break;
        case 85: _t->addQWidgetTab((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 86: _t->showQWidgetTab((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 87: _t->closeQWidgetTab((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 88: _t->executeOnGuiThread((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 89: _t->updateTimeWastedCounter(); break;
        case 90: _t->setGlobalNotes((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 91: _t->getGlobalNotes((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 92: _t->setDebuggeeNotes((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 93: _t->getDebuggeeNotes((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 94: _t->dumpAtN((*reinterpret_cast< duint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 95: _t->displayWarning((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 96: _t->registerScriptLang((*reinterpret_cast< SCRIPTTYPEINFO*(*)>(_a[1]))); break;
        case 97: _t->unregisterScriptLang((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 98: _t->focusDisasm(); break;
        case 99: _t->focusDump(); break;
        case 100: _t->focusStruct(); break;
        case 101: _t->focusStack(); break;
        case 102: _t->focusGraph(); break;
        case 103: _t->focusMemmap(); break;
        case 104: _t->focusSymmod(); break;
        case 105: _t->updateWatch(); break;
        case 106: _t->loadGraph((*reinterpret_cast< BridgeCFGraphList*(*)>(_a[1])),(*reinterpret_cast< duint(*)>(_a[2]))); break;
        case 107: _t->graphAt((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 108: _t->updateGraph(); break;
        case 109: _t->setLogEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 110: _t->addFavouriteItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 111: _t->setFavouriteItemShortcut((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 112: _t->foldDisassembly((*reinterpret_cast< duint(*)>(_a[1])),(*reinterpret_cast< duint(*)>(_a[2]))); break;
        case 113: _t->selectInMemoryMap((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 114: _t->getActiveView((*reinterpret_cast< ACTIVEVIEW*(*)>(_a[1]))); break;
        case 115: _t->addInfoLine((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 116: _t->typeAddNode((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const TYPEDESCRIPTOR*(*)>(_a[2]))); break;
        case 117: _t->typeClear(); break;
        case 118: _t->typeUpdateWidget(); break;
        case 119: _t->typeVisit((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< duint(*)>(_a[2]))); break;
        case 120: _t->typeListUpdated(); break;
        case 121: _t->closeApplication(); break;
        case 122: _t->flushLog(); break;
        case 123: _t->getDumpAttention(); break;
        case 124: _t->openTraceFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 125: _t->updateTraceBrowser(); break;
        case 126: _t->symbolSelectModule((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 127: _t->getCurrentGraph((*reinterpret_cast< BridgeCFGraphList*(*)>(_a[1]))); break;
        case 128: _t->showReferences(); break;
        case 129: _t->gotoTraceIndex((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 130: _t->showTraceBrowser(); break;
        case 131: _t->throttleUpdate((*reinterpret_cast< GUIMSG(*)>(_a[1]))); break;
        case 132: _t->throttleUpdateSlot((*reinterpret_cast< GUIMSG(*)>(_a[1]))); break;
        case 133: _t->configUpdatedSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMenu* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 85:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 86:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 87:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Bridge::*)(duint , duint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::disassembleAt)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::updateDisassembly)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(DBGSTATE );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::dbgStateChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::addMsgToLog)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::addMsgToLogHtml)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::clearLog)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::saveLog)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::saveLogToFile)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::redirectLogStop)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::redirectLogToFile)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::close)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::updateRegisters)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::updateBreakpoints)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::updateWindowTitle)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(duint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::dumpAt)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int , const char * * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::scriptAdd)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::scriptClear)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::scriptSetIp)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::scriptError)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::scriptSetTitle)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::scriptSetInfoLine)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::scriptMessage)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::scriptQuestion)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::scriptEnableHighlighting)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int , SYMBOLMODULEINFO * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::updateSymbolList)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::addMsgToSymbolLog)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::clearSymbolLog)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::setSymbolProgress)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::referenceAddColumnAt)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(duint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::referenceSetRowCount)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::referenceSetCellContent)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::referenceAddCommand)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::referenceReloadData)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::referenceSetSingleSelection)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::referenceSetProgress)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::referenceSetCurrentTaskProgress)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::referenceSetSearchStartCol)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::referenceInitialize)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(duint , duint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::stackDumpAt)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::updateDump)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::updateThreads)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::updateMemory)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::addRecentFile)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::setLastException)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(QWidget * , QMenu * , GUIMENUTYPE , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::menuAddMenuToList)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::menuAddMenu)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::menuAddMenuEntry)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::menuAddSeparator)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::menuClearMenu)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::menuRemoveMenuEntry)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int , QIcon );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::setIconMenuEntry)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int , QIcon );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::setIconMenu)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::setCheckedMenuEntry)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::setVisibleMenuEntry)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::setVisibleMenu)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::setNameMenuEntry)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::setNameMenu)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::setHotkeyMenuEntry)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(SELECTIONDATA * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::selectionDisasmGet)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(const SELECTIONDATA * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::selectionDisasmSet)) {
                *result = 59;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(SELECTIONDATA * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::selectionDumpGet)) {
                *result = 60;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(const SELECTIONDATA * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::selectionDumpSet)) {
                *result = 61;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(SELECTIONDATA * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::selectionStackGet)) {
                *result = 62;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(const SELECTIONDATA * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::selectionStackSet)) {
                *result = 63;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(SELECTIONDATA * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::selectionGraphGet)) {
                *result = 64;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(SELECTIONDATA * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::selectionMemmapGet)) {
                *result = 65;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(const SELECTIONDATA * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::selectionMemmapSet)) {
                *result = 66;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(SELECTIONDATA * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::selectionSymmodGet)) {
                *result = 67;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(SELECTIONDATA * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::selectionThreadsGet)) {
                *result = 68;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(const SELECTIONDATA * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::selectionThreadsSet)) {
                *result = 69;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(const QString , QString * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::getStrWindow)) {
                *result = 70;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::autoCompleteAddCmd)) {
                *result = 71;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::autoCompleteDelCmd)) {
                *result = 72;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::autoCompleteClearAll)) {
                *result = 73;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::addMsgToStatusBar)) {
                *result = 74;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::updateSideBar)) {
                *result = 75;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::repaintTableView)) {
                *result = 76;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::updatePatches)) {
                *result = 77;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::updateCallStack)) {
                *result = 78;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::updateSEHChain)) {
                *result = 79;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::updateArgumentView)) {
                *result = 80;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::symbolRefreshCurrent)) {
                *result = 81;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(const QString , duint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::loadSourceFile)) {
                *result = 82;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::showCpu)) {
                *result = 83;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::showThreads)) {
                *result = 84;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::addQWidgetTab)) {
                *result = 85;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::showQWidgetTab)) {
                *result = 86;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::closeQWidgetTab)) {
                *result = 87;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(void * , void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::executeOnGuiThread)) {
                *result = 88;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::updateTimeWastedCounter)) {
                *result = 89;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::setGlobalNotes)) {
                *result = 90;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::getGlobalNotes)) {
                *result = 91;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::setDebuggeeNotes)) {
                *result = 92;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::getDebuggeeNotes)) {
                *result = 93;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(duint , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::dumpAtN)) {
                *result = 94;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::displayWarning)) {
                *result = 95;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(SCRIPTTYPEINFO * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::registerScriptLang)) {
                *result = 96;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::unregisterScriptLang)) {
                *result = 97;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::focusDisasm)) {
                *result = 98;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::focusDump)) {
                *result = 99;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::focusStruct)) {
                *result = 100;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::focusStack)) {
                *result = 101;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::focusGraph)) {
                *result = 102;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::focusMemmap)) {
                *result = 103;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::focusSymmod)) {
                *result = 104;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::updateWatch)) {
                *result = 105;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(BridgeCFGraphList * , duint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::loadGraph)) {
                *result = 106;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(duint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::graphAt)) {
                *result = 107;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::updateGraph)) {
                *result = 108;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::setLogEnabled)) {
                *result = 109;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::addFavouriteItem)) {
                *result = 110;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(int , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::setFavouriteItemShortcut)) {
                *result = 111;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(duint , duint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::foldDisassembly)) {
                *result = 112;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(duint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::selectInMemoryMap)) {
                *result = 113;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(ACTIVEVIEW * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::getActiveView)) {
                *result = 114;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::addInfoLine)) {
                *result = 115;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(void * , const TYPEDESCRIPTOR * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::typeAddNode)) {
                *result = 116;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::typeClear)) {
                *result = 117;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::typeUpdateWidget)) {
                *result = 118;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(QString , duint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::typeVisit)) {
                *result = 119;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::typeListUpdated)) {
                *result = 120;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::closeApplication)) {
                *result = 121;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::flushLog)) {
                *result = 122;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::getDumpAttention)) {
                *result = 123;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::openTraceFile)) {
                *result = 124;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::updateTraceBrowser)) {
                *result = 125;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(duint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::symbolSelectModule)) {
                *result = 126;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(BridgeCFGraphList * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::getCurrentGraph)) {
                *result = 127;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::showReferences)) {
                *result = 128;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(duint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::gotoTraceIndex)) {
                *result = 129;
                return;
            }
        }
        {
            using _t = void (Bridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::showTraceBrowser)) {
                *result = 130;
                return;
            }
        }
        {
            using _t = void (Bridge::*)(GUIMSG );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Bridge::throttleUpdate)) {
                *result = 131;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Bridge::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Bridge.data,
    qt_meta_data_Bridge,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Bridge::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Bridge::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Bridge.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Bridge::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 134)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 134;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 134)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 134;
    }
    return _id;
}

// SIGNAL 0
void Bridge::disassembleAt(duint _t1, duint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Bridge::updateDisassembly()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Bridge::dbgStateChanged(DBGSTATE _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Bridge::addMsgToLog(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Bridge::addMsgToLogHtml(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Bridge::clearLog()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Bridge::saveLog()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Bridge::saveLogToFile(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Bridge::redirectLogStop()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Bridge::redirectLogToFile(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Bridge::close()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Bridge::updateRegisters()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Bridge::updateBreakpoints()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Bridge::updateWindowTitle(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Bridge::dumpAt(duint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Bridge::scriptAdd(int _t1, const char * * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Bridge::scriptClear()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void Bridge::scriptSetIp(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Bridge::scriptError(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Bridge::scriptSetTitle(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Bridge::scriptSetInfoLine(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Bridge::scriptMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Bridge::scriptQuestion(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void Bridge::scriptEnableHighlighting(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void Bridge::updateSymbolList(int _t1, SYMBOLMODULEINFO * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Bridge::addMsgToSymbolLog(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void Bridge::clearSymbolLog()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void Bridge::setSymbolProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Bridge::referenceAddColumnAt(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void Bridge::referenceSetRowCount(duint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void Bridge::referenceSetCellContent(int _t1, int _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void Bridge::referenceAddCommand(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void Bridge::referenceReloadData()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void Bridge::referenceSetSingleSelection(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void Bridge::referenceSetProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void Bridge::referenceSetCurrentTaskProgress(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void Bridge::referenceSetSearchStartCol(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void Bridge::referenceInitialize(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void Bridge::stackDumpAt(duint _t1, duint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void Bridge::updateDump()
{
    QMetaObject::activate(this, &staticMetaObject, 39, nullptr);
}

// SIGNAL 40
void Bridge::updateThreads()
{
    QMetaObject::activate(this, &staticMetaObject, 40, nullptr);
}

// SIGNAL 41
void Bridge::updateMemory()
{
    QMetaObject::activate(this, &staticMetaObject, 41, nullptr);
}

// SIGNAL 42
void Bridge::addRecentFile(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void Bridge::setLastException(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void Bridge::menuAddMenuToList(QWidget * _t1, QMenu * _t2, GUIMENUTYPE _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void Bridge::menuAddMenu(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void Bridge::menuAddMenuEntry(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void Bridge::menuAddSeparator(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void Bridge::menuClearMenu(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void Bridge::menuRemoveMenuEntry(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void Bridge::setIconMenuEntry(int _t1, QIcon _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void Bridge::setIconMenu(int _t1, QIcon _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void Bridge::setCheckedMenuEntry(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void Bridge::setVisibleMenuEntry(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void Bridge::setVisibleMenu(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void Bridge::setNameMenuEntry(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void Bridge::setNameMenu(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void Bridge::setHotkeyMenuEntry(int _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void Bridge::selectionDisasmGet(SELECTIONDATA * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void Bridge::selectionDisasmSet(const SELECTIONDATA * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void Bridge::selectionDumpGet(SELECTIONDATA * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void Bridge::selectionDumpSet(const SELECTIONDATA * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void Bridge::selectionStackGet(SELECTIONDATA * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void Bridge::selectionStackSet(const SELECTIONDATA * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void Bridge::selectionGraphGet(SELECTIONDATA * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void Bridge::selectionMemmapGet(SELECTIONDATA * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void Bridge::selectionMemmapSet(const SELECTIONDATA * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void Bridge::selectionSymmodGet(SELECTIONDATA * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void Bridge::selectionThreadsGet(SELECTIONDATA * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void Bridge::selectionThreadsSet(const SELECTIONDATA * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void Bridge::getStrWindow(const QString _t1, QString * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void Bridge::autoCompleteAddCmd(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void Bridge::autoCompleteDelCmd(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void Bridge::autoCompleteClearAll()
{
    QMetaObject::activate(this, &staticMetaObject, 73, nullptr);
}

// SIGNAL 74
void Bridge::addMsgToStatusBar(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void Bridge::updateSideBar()
{
    QMetaObject::activate(this, &staticMetaObject, 75, nullptr);
}

// SIGNAL 76
void Bridge::repaintTableView()
{
    QMetaObject::activate(this, &staticMetaObject, 76, nullptr);
}

// SIGNAL 77
void Bridge::updatePatches()
{
    QMetaObject::activate(this, &staticMetaObject, 77, nullptr);
}

// SIGNAL 78
void Bridge::updateCallStack()
{
    QMetaObject::activate(this, &staticMetaObject, 78, nullptr);
}

// SIGNAL 79
void Bridge::updateSEHChain()
{
    QMetaObject::activate(this, &staticMetaObject, 79, nullptr);
}

// SIGNAL 80
void Bridge::updateArgumentView()
{
    QMetaObject::activate(this, &staticMetaObject, 80, nullptr);
}

// SIGNAL 81
void Bridge::symbolRefreshCurrent()
{
    QMetaObject::activate(this, &staticMetaObject, 81, nullptr);
}

// SIGNAL 82
void Bridge::loadSourceFile(const QString _t1, duint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 82, _a);
}

// SIGNAL 83
void Bridge::showCpu()
{
    QMetaObject::activate(this, &staticMetaObject, 83, nullptr);
}

// SIGNAL 84
void Bridge::showThreads()
{
    QMetaObject::activate(this, &staticMetaObject, 84, nullptr);
}

// SIGNAL 85
void Bridge::addQWidgetTab(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 85, _a);
}

// SIGNAL 86
void Bridge::showQWidgetTab(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 86, _a);
}

// SIGNAL 87
void Bridge::closeQWidgetTab(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 87, _a);
}

// SIGNAL 88
void Bridge::executeOnGuiThread(void * _t1, void * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 88, _a);
}

// SIGNAL 89
void Bridge::updateTimeWastedCounter()
{
    QMetaObject::activate(this, &staticMetaObject, 89, nullptr);
}

// SIGNAL 90
void Bridge::setGlobalNotes(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 90, _a);
}

// SIGNAL 91
void Bridge::getGlobalNotes(void * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 91, _a);
}

// SIGNAL 92
void Bridge::setDebuggeeNotes(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 92, _a);
}

// SIGNAL 93
void Bridge::getDebuggeeNotes(void * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 93, _a);
}

// SIGNAL 94
void Bridge::dumpAtN(duint _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 94, _a);
}

// SIGNAL 95
void Bridge::displayWarning(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 95, _a);
}

// SIGNAL 96
void Bridge::registerScriptLang(SCRIPTTYPEINFO * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 96, _a);
}

// SIGNAL 97
void Bridge::unregisterScriptLang(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 97, _a);
}

// SIGNAL 98
void Bridge::focusDisasm()
{
    QMetaObject::activate(this, &staticMetaObject, 98, nullptr);
}

// SIGNAL 99
void Bridge::focusDump()
{
    QMetaObject::activate(this, &staticMetaObject, 99, nullptr);
}

// SIGNAL 100
void Bridge::focusStruct()
{
    QMetaObject::activate(this, &staticMetaObject, 100, nullptr);
}

// SIGNAL 101
void Bridge::focusStack()
{
    QMetaObject::activate(this, &staticMetaObject, 101, nullptr);
}

// SIGNAL 102
void Bridge::focusGraph()
{
    QMetaObject::activate(this, &staticMetaObject, 102, nullptr);
}

// SIGNAL 103
void Bridge::focusMemmap()
{
    QMetaObject::activate(this, &staticMetaObject, 103, nullptr);
}

// SIGNAL 104
void Bridge::focusSymmod()
{
    QMetaObject::activate(this, &staticMetaObject, 104, nullptr);
}

// SIGNAL 105
void Bridge::updateWatch()
{
    QMetaObject::activate(this, &staticMetaObject, 105, nullptr);
}

// SIGNAL 106
void Bridge::loadGraph(BridgeCFGraphList * _t1, duint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 106, _a);
}

// SIGNAL 107
void Bridge::graphAt(duint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 107, _a);
}

// SIGNAL 108
void Bridge::updateGraph()
{
    QMetaObject::activate(this, &staticMetaObject, 108, nullptr);
}

// SIGNAL 109
void Bridge::setLogEnabled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 109, _a);
}

// SIGNAL 110
void Bridge::addFavouriteItem(int _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 110, _a);
}

// SIGNAL 111
void Bridge::setFavouriteItemShortcut(int _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 111, _a);
}

// SIGNAL 112
void Bridge::foldDisassembly(duint _t1, duint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 112, _a);
}

// SIGNAL 113
void Bridge::selectInMemoryMap(duint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 113, _a);
}

// SIGNAL 114
void Bridge::getActiveView(ACTIVEVIEW * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 114, _a);
}

// SIGNAL 115
void Bridge::addInfoLine(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 115, _a);
}

// SIGNAL 116
void Bridge::typeAddNode(void * _t1, const TYPEDESCRIPTOR * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 116, _a);
}

// SIGNAL 117
void Bridge::typeClear()
{
    QMetaObject::activate(this, &staticMetaObject, 117, nullptr);
}

// SIGNAL 118
void Bridge::typeUpdateWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 118, nullptr);
}

// SIGNAL 119
void Bridge::typeVisit(QString _t1, duint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 119, _a);
}

// SIGNAL 120
void Bridge::typeListUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 120, nullptr);
}

// SIGNAL 121
void Bridge::closeApplication()
{
    QMetaObject::activate(this, &staticMetaObject, 121, nullptr);
}

// SIGNAL 122
void Bridge::flushLog()
{
    QMetaObject::activate(this, &staticMetaObject, 122, nullptr);
}

// SIGNAL 123
void Bridge::getDumpAttention()
{
    QMetaObject::activate(this, &staticMetaObject, 123, nullptr);
}

// SIGNAL 124
void Bridge::openTraceFile(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 124, _a);
}

// SIGNAL 125
void Bridge::updateTraceBrowser()
{
    QMetaObject::activate(this, &staticMetaObject, 125, nullptr);
}

// SIGNAL 126
void Bridge::symbolSelectModule(duint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 126, _a);
}

// SIGNAL 127
void Bridge::getCurrentGraph(BridgeCFGraphList * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 127, _a);
}

// SIGNAL 128
void Bridge::showReferences()
{
    QMetaObject::activate(this, &staticMetaObject, 128, nullptr);
}

// SIGNAL 129
void Bridge::gotoTraceIndex(duint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 129, _a);
}

// SIGNAL 130
void Bridge::showTraceBrowser()
{
    QMetaObject::activate(this, &staticMetaObject, 130, nullptr);
}

// SIGNAL 131
void Bridge::throttleUpdate(GUIMSG _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 131, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
