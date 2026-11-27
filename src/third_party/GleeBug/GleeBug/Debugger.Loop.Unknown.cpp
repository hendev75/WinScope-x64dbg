#include "Debugger.h"

namespace Engine
{
    void Debugger::unknownEvent(DWORD debugEventCode)
    {
        //prevent possible anti-debug trick
        mContinueStatus = DBG_EXCEPTION_NOT_HANDLED;

        //call the debug event callback
        cbUnknownEvent(debugEventCode);
    }
};