/****************************************************************************
** Meta object code from reading C++ file 'CPUDisassembly.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Gui/CPUDisassembly.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CPUDisassembly.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CPUDisassembly_t {
    QByteArrayData data[83];
    char stringdata0[1516];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CPUDisassembly_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CPUDisassembly_t qt_meta_stringdata_CPUDisassembly = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CPUDisassembly"
QT_MOC_LITERAL(1, 15, 23), // "displayReferencesWidget"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 26), // "displaySourceManagerWidget"
QT_MOC_LITERAL(4, 67, 11), // "showPatches"
QT_MOC_LITERAL(5, 79, 16), // "displayLogWidget"
QT_MOC_LITERAL(6, 96, 20), // "displaySymbolsWidget"
QT_MOC_LITERAL(7, 117, 14), // "gotoOriginSlot"
QT_MOC_LITERAL(8, 132, 12), // "setLabelSlot"
QT_MOC_LITERAL(9, 145, 19), // "setLabelAddressSlot"
QT_MOC_LITERAL(10, 165, 18), // "toggleFunctionSlot"
QT_MOC_LITERAL(11, 184, 18), // "toggleArgumentSlot"
QT_MOC_LITERAL(12, 203, 11), // "addLoopSlot"
QT_MOC_LITERAL(13, 215, 14), // "deleteLoopSlot"
QT_MOC_LITERAL(14, 230, 12), // "assembleSlot"
QT_MOC_LITERAL(15, 243, 18), // "gotoExpressionSlot"
QT_MOC_LITERAL(16, 262, 18), // "gotoFileOffsetSlot"
QT_MOC_LITERAL(17, 281, 13), // "gotoStartSlot"
QT_MOC_LITERAL(18, 295, 11), // "gotoEndSlot"
QT_MOC_LITERAL(19, 307, 21), // "gotoFunctionStartSlot"
QT_MOC_LITERAL(20, 329, 19), // "gotoFunctionEndSlot"
QT_MOC_LITERAL(21, 349, 25), // "gotoPreviousReferenceSlot"
QT_MOC_LITERAL(22, 375, 21), // "gotoNextReferenceSlot"
QT_MOC_LITERAL(23, 397, 16), // "followActionSlot"
QT_MOC_LITERAL(24, 414, 16), // "gotoPreviousSlot"
QT_MOC_LITERAL(25, 431, 12), // "gotoNextSlot"
QT_MOC_LITERAL(26, 444, 12), // "gotoXrefSlot"
QT_MOC_LITERAL(27, 457, 18), // "findReferencesSlot"
QT_MOC_LITERAL(28, 476, 16), // "findConstantSlot"
QT_MOC_LITERAL(29, 493, 15), // "findStringsSlot"
QT_MOC_LITERAL(30, 509, 13), // "findCallsSlot"
QT_MOC_LITERAL(31, 523, 15), // "findPatternSlot"
QT_MOC_LITERAL(32, 539, 12), // "findGUIDSlot"
QT_MOC_LITERAL(33, 552, 13), // "findNamesSlot"
QT_MOC_LITERAL(34, 566, 16), // "selectionGetSlot"
QT_MOC_LITERAL(35, 583, 14), // "SELECTIONDATA*"
QT_MOC_LITERAL(36, 598, 9), // "selection"
QT_MOC_LITERAL(37, 608, 16), // "selectionSetSlot"
QT_MOC_LITERAL(38, 625, 20), // "const SELECTIONDATA*"
QT_MOC_LITERAL(39, 646, 20), // "selectionUpdatedSlot"
QT_MOC_LITERAL(40, 667, 26), // "enableHighlightingModeSlot"
QT_MOC_LITERAL(41, 694, 14), // "binaryEditSlot"
QT_MOC_LITERAL(42, 709, 14), // "binaryFillSlot"
QT_MOC_LITERAL(43, 724, 18), // "binaryFillNopsSlot"
QT_MOC_LITERAL(44, 743, 14), // "binaryCopySlot"
QT_MOC_LITERAL(45, 758, 15), // "binaryPasteSlot"
QT_MOC_LITERAL(46, 774, 25), // "binaryPasteIgnoreSizeSlot"
QT_MOC_LITERAL(47, 800, 17), // "undoSelectionSlot"
QT_MOC_LITERAL(48, 818, 15), // "showPatchesSlot"
QT_MOC_LITERAL(49, 834, 17), // "copySelectionSlot"
QT_MOC_LITERAL(50, 852, 23), // "copySelectionToFileSlot"
QT_MOC_LITERAL(51, 876, 24), // "copySelectionNoBytesSlot"
QT_MOC_LITERAL(52, 901, 30), // "copySelectionToFileNoBytesSlot"
QT_MOC_LITERAL(53, 932, 22), // "copySelectionBytesSlot"
QT_MOC_LITERAL(54, 955, 15), // "copyAddressSlot"
QT_MOC_LITERAL(55, 971, 11), // "copyRvaSlot"
QT_MOC_LITERAL(56, 983, 18), // "copyFileOffsetSlot"
QT_MOC_LITERAL(57, 1002, 16), // "copyHeaderVaSlot"
QT_MOC_LITERAL(58, 1019, 19), // "copyDisassemblySlot"
QT_MOC_LITERAL(59, 1039, 13), // "labelCopySlot"
QT_MOC_LITERAL(60, 1053, 15), // "findCommandSlot"
QT_MOC_LITERAL(61, 1069, 14), // "openSourceSlot"
QT_MOC_LITERAL(62, 1084, 16), // "mnemonicHelpSlot"
QT_MOC_LITERAL(63, 1101, 17), // "mnemonicBriefSlot"
QT_MOC_LITERAL(64, 1119, 20), // "traceCoverageBitSlot"
QT_MOC_LITERAL(65, 1140, 21), // "traceCoverageByteSlot"
QT_MOC_LITERAL(66, 1162, 21), // "traceCoverageWordSlot"
QT_MOC_LITERAL(67, 1184, 22), // "traceCoverageResetSlot"
QT_MOC_LITERAL(68, 1207, 24), // "traceCoverageDisableSlot"
QT_MOC_LITERAL(69, 1232, 37), // "traceCoverageToggleTraceRecor..."
QT_MOC_LITERAL(70, 1270, 18), // "displayWarningSlot"
QT_MOC_LITERAL(71, 1289, 5), // "title"
QT_MOC_LITERAL(72, 1295, 4), // "text"
QT_MOC_LITERAL(73, 1300, 13), // "labelHelpSlot"
QT_MOC_LITERAL(74, 1314, 25), // "analyzeSingleFunctionSlot"
QT_MOC_LITERAL(75, 1340, 27), // "removeAnalysisSelectionSlot"
QT_MOC_LITERAL(76, 1368, 24), // "removeAnalysisModuleSlot"
QT_MOC_LITERAL(77, 1393, 17), // "setEncodeTypeSlot"
QT_MOC_LITERAL(78, 1411, 22), // "setEncodeTypeRangeSlot"
QT_MOC_LITERAL(79, 1434, 17), // "analyzeModuleSlot"
QT_MOC_LITERAL(80, 1452, 17), // "copyTokenTextSlot"
QT_MOC_LITERAL(81, 1470, 18), // "copyTokenValueSlot"
QT_MOC_LITERAL(82, 1489, 26) // "downloadCurrentSymbolsSlot"

    },
    "CPUDisassembly\0displayReferencesWidget\0"
    "\0displaySourceManagerWidget\0showPatches\0"
    "displayLogWidget\0displaySymbolsWidget\0"
    "gotoOriginSlot\0setLabelSlot\0"
    "setLabelAddressSlot\0toggleFunctionSlot\0"
    "toggleArgumentSlot\0addLoopSlot\0"
    "deleteLoopSlot\0assembleSlot\0"
    "gotoExpressionSlot\0gotoFileOffsetSlot\0"
    "gotoStartSlot\0gotoEndSlot\0"
    "gotoFunctionStartSlot\0gotoFunctionEndSlot\0"
    "gotoPreviousReferenceSlot\0"
    "gotoNextReferenceSlot\0followActionSlot\0"
    "gotoPreviousSlot\0gotoNextSlot\0"
    "gotoXrefSlot\0findReferencesSlot\0"
    "findConstantSlot\0findStringsSlot\0"
    "findCallsSlot\0findPatternSlot\0"
    "findGUIDSlot\0findNamesSlot\0selectionGetSlot\0"
    "SELECTIONDATA*\0selection\0selectionSetSlot\0"
    "const SELECTIONDATA*\0selectionUpdatedSlot\0"
    "enableHighlightingModeSlot\0binaryEditSlot\0"
    "binaryFillSlot\0binaryFillNopsSlot\0"
    "binaryCopySlot\0binaryPasteSlot\0"
    "binaryPasteIgnoreSizeSlot\0undoSelectionSlot\0"
    "showPatchesSlot\0copySelectionSlot\0"
    "copySelectionToFileSlot\0"
    "copySelectionNoBytesSlot\0"
    "copySelectionToFileNoBytesSlot\0"
    "copySelectionBytesSlot\0copyAddressSlot\0"
    "copyRvaSlot\0copyFileOffsetSlot\0"
    "copyHeaderVaSlot\0copyDisassemblySlot\0"
    "labelCopySlot\0findCommandSlot\0"
    "openSourceSlot\0mnemonicHelpSlot\0"
    "mnemonicBriefSlot\0traceCoverageBitSlot\0"
    "traceCoverageByteSlot\0traceCoverageWordSlot\0"
    "traceCoverageResetSlot\0traceCoverageDisableSlot\0"
    "traceCoverageToggleTraceRecordingSlot\0"
    "displayWarningSlot\0title\0text\0"
    "labelHelpSlot\0analyzeSingleFunctionSlot\0"
    "removeAnalysisSelectionSlot\0"
    "removeAnalysisModuleSlot\0setEncodeTypeSlot\0"
    "setEncodeTypeRangeSlot\0analyzeModuleSlot\0"
    "copyTokenTextSlot\0copyTokenValueSlot\0"
    "downloadCurrentSymbolsSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CPUDisassembly[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      76,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  394,    2, 0x06 /* Public */,
       3,    0,  395,    2, 0x06 /* Public */,
       4,    0,  396,    2, 0x06 /* Public */,
       5,    0,  397,    2, 0x06 /* Public */,
       6,    0,  398,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  399,    2, 0x0a /* Public */,
       8,    0,  400,    2, 0x0a /* Public */,
       9,    0,  401,    2, 0x0a /* Public */,
      10,    0,  402,    2, 0x0a /* Public */,
      11,    0,  403,    2, 0x0a /* Public */,
      12,    0,  404,    2, 0x0a /* Public */,
      13,    0,  405,    2, 0x0a /* Public */,
      14,    0,  406,    2, 0x0a /* Public */,
      15,    0,  407,    2, 0x0a /* Public */,
      16,    0,  408,    2, 0x0a /* Public */,
      17,    0,  409,    2, 0x0a /* Public */,
      18,    0,  410,    2, 0x0a /* Public */,
      19,    0,  411,    2, 0x0a /* Public */,
      20,    0,  412,    2, 0x0a /* Public */,
      21,    0,  413,    2, 0x0a /* Public */,
      22,    0,  414,    2, 0x0a /* Public */,
      23,    0,  415,    2, 0x0a /* Public */,
      24,    0,  416,    2, 0x0a /* Public */,
      25,    0,  417,    2, 0x0a /* Public */,
      26,    0,  418,    2, 0x0a /* Public */,
      27,    0,  419,    2, 0x0a /* Public */,
      28,    0,  420,    2, 0x0a /* Public */,
      29,    0,  421,    2, 0x0a /* Public */,
      30,    0,  422,    2, 0x0a /* Public */,
      31,    0,  423,    2, 0x0a /* Public */,
      32,    0,  424,    2, 0x0a /* Public */,
      33,    0,  425,    2, 0x0a /* Public */,
      34,    1,  426,    2, 0x0a /* Public */,
      37,    1,  429,    2, 0x0a /* Public */,
      39,    0,  432,    2, 0x0a /* Public */,
      40,    0,  433,    2, 0x0a /* Public */,
      41,    0,  434,    2, 0x0a /* Public */,
      42,    0,  435,    2, 0x0a /* Public */,
      43,    0,  436,    2, 0x0a /* Public */,
      44,    0,  437,    2, 0x0a /* Public */,
      45,    0,  438,    2, 0x0a /* Public */,
      46,    0,  439,    2, 0x0a /* Public */,
      47,    0,  440,    2, 0x0a /* Public */,
      48,    0,  441,    2, 0x0a /* Public */,
      49,    0,  442,    2, 0x0a /* Public */,
      50,    0,  443,    2, 0x0a /* Public */,
      51,    0,  444,    2, 0x0a /* Public */,
      52,    0,  445,    2, 0x0a /* Public */,
      53,    0,  446,    2, 0x0a /* Public */,
      54,    0,  447,    2, 0x0a /* Public */,
      55,    0,  448,    2, 0x0a /* Public */,
      56,    0,  449,    2, 0x0a /* Public */,
      57,    0,  450,    2, 0x0a /* Public */,
      58,    0,  451,    2, 0x0a /* Public */,
      59,    0,  452,    2, 0x0a /* Public */,
      60,    0,  453,    2, 0x0a /* Public */,
      61,    0,  454,    2, 0x0a /* Public */,
      62,    0,  455,    2, 0x0a /* Public */,
      63,    0,  456,    2, 0x0a /* Public */,
      64,    0,  457,    2, 0x0a /* Public */,
      65,    0,  458,    2, 0x0a /* Public */,
      66,    0,  459,    2, 0x0a /* Public */,
      67,    0,  460,    2, 0x0a /* Public */,
      68,    0,  461,    2, 0x0a /* Public */,
      69,    0,  462,    2, 0x0a /* Public */,
      70,    2,  463,    2, 0x0a /* Public */,
      73,    0,  468,    2, 0x0a /* Public */,
      74,    0,  469,    2, 0x0a /* Public */,
      75,    0,  470,    2, 0x0a /* Public */,
      76,    0,  471,    2, 0x0a /* Public */,
      77,    0,  472,    2, 0x0a /* Public */,
      78,    0,  473,    2, 0x0a /* Public */,
      79,    0,  474,    2, 0x0a /* Public */,
      80,    0,  475,    2, 0x0a /* Public */,
      81,    0,  476,    2, 0x0a /* Public */,
      82,    0,  477,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, 0x80000000 | 38,   36,
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
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   71,   72,
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

       0        // eod
};

void CPUDisassembly::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CPUDisassembly *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->displayReferencesWidget(); break;
        case 1: _t->displaySourceManagerWidget(); break;
        case 2: _t->showPatches(); break;
        case 3: _t->displayLogWidget(); break;
        case 4: _t->displaySymbolsWidget(); break;
        case 5: _t->gotoOriginSlot(); break;
        case 6: _t->setLabelSlot(); break;
        case 7: _t->setLabelAddressSlot(); break;
        case 8: _t->toggleFunctionSlot(); break;
        case 9: _t->toggleArgumentSlot(); break;
        case 10: _t->addLoopSlot(); break;
        case 11: _t->deleteLoopSlot(); break;
        case 12: _t->assembleSlot(); break;
        case 13: _t->gotoExpressionSlot(); break;
        case 14: _t->gotoFileOffsetSlot(); break;
        case 15: _t->gotoStartSlot(); break;
        case 16: _t->gotoEndSlot(); break;
        case 17: _t->gotoFunctionStartSlot(); break;
        case 18: _t->gotoFunctionEndSlot(); break;
        case 19: _t->gotoPreviousReferenceSlot(); break;
        case 20: _t->gotoNextReferenceSlot(); break;
        case 21: _t->followActionSlot(); break;
        case 22: _t->gotoPreviousSlot(); break;
        case 23: _t->gotoNextSlot(); break;
        case 24: _t->gotoXrefSlot(); break;
        case 25: _t->findReferencesSlot(); break;
        case 26: _t->findConstantSlot(); break;
        case 27: _t->findStringsSlot(); break;
        case 28: _t->findCallsSlot(); break;
        case 29: _t->findPatternSlot(); break;
        case 30: _t->findGUIDSlot(); break;
        case 31: _t->findNamesSlot(); break;
        case 32: _t->selectionGetSlot((*reinterpret_cast< SELECTIONDATA*(*)>(_a[1]))); break;
        case 33: _t->selectionSetSlot((*reinterpret_cast< const SELECTIONDATA*(*)>(_a[1]))); break;
        case 34: _t->selectionUpdatedSlot(); break;
        case 35: _t->enableHighlightingModeSlot(); break;
        case 36: _t->binaryEditSlot(); break;
        case 37: _t->binaryFillSlot(); break;
        case 38: _t->binaryFillNopsSlot(); break;
        case 39: _t->binaryCopySlot(); break;
        case 40: _t->binaryPasteSlot(); break;
        case 41: _t->binaryPasteIgnoreSizeSlot(); break;
        case 42: _t->undoSelectionSlot(); break;
        case 43: _t->showPatchesSlot(); break;
        case 44: _t->copySelectionSlot(); break;
        case 45: _t->copySelectionToFileSlot(); break;
        case 46: _t->copySelectionNoBytesSlot(); break;
        case 47: _t->copySelectionToFileNoBytesSlot(); break;
        case 48: _t->copySelectionBytesSlot(); break;
        case 49: _t->copyAddressSlot(); break;
        case 50: _t->copyRvaSlot(); break;
        case 51: _t->copyFileOffsetSlot(); break;
        case 52: _t->copyHeaderVaSlot(); break;
        case 53: _t->copyDisassemblySlot(); break;
        case 54: _t->labelCopySlot(); break;
        case 55: _t->findCommandSlot(); break;
        case 56: _t->openSourceSlot(); break;
        case 57: _t->mnemonicHelpSlot(); break;
        case 58: _t->mnemonicBriefSlot(); break;
        case 59: _t->traceCoverageBitSlot(); break;
        case 60: _t->traceCoverageByteSlot(); break;
        case 61: _t->traceCoverageWordSlot(); break;
        case 62: _t->traceCoverageResetSlot(); break;
        case 63: _t->traceCoverageDisableSlot(); break;
        case 64: _t->traceCoverageToggleTraceRecordingSlot(); break;
        case 65: _t->displayWarningSlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 66: _t->labelHelpSlot(); break;
        case 67: _t->analyzeSingleFunctionSlot(); break;
        case 68: _t->removeAnalysisSelectionSlot(); break;
        case 69: _t->removeAnalysisModuleSlot(); break;
        case 70: _t->setEncodeTypeSlot(); break;
        case 71: _t->setEncodeTypeRangeSlot(); break;
        case 72: _t->analyzeModuleSlot(); break;
        case 73: _t->copyTokenTextSlot(); break;
        case 74: _t->copyTokenValueSlot(); break;
        case 75: _t->downloadCurrentSymbolsSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CPUDisassembly::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CPUDisassembly::displayReferencesWidget)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CPUDisassembly::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CPUDisassembly::displaySourceManagerWidget)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CPUDisassembly::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CPUDisassembly::showPatches)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CPUDisassembly::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CPUDisassembly::displayLogWidget)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CPUDisassembly::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CPUDisassembly::displaySymbolsWidget)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CPUDisassembly::staticMetaObject = { {
    &Disassembly::staticMetaObject,
    qt_meta_stringdata_CPUDisassembly.data,
    qt_meta_data_CPUDisassembly,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CPUDisassembly::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CPUDisassembly::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CPUDisassembly.stringdata0))
        return static_cast<void*>(this);
    return Disassembly::qt_metacast(_clname);
}

int CPUDisassembly::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Disassembly::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 76)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 76;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 76)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 76;
    }
    return _id;
}

// SIGNAL 0
void CPUDisassembly::displayReferencesWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CPUDisassembly::displaySourceManagerWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CPUDisassembly::showPatches()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CPUDisassembly::displayLogWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void CPUDisassembly::displaySymbolsWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
