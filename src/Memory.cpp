#include "Memory.h"
#include "Logger.h"

namespace Memory
{
    static uintptr_t gBase = 0;

    bool Init()
    {
        Logger::Info("Memory Ready");
        gBase = 0;
        return true;
    }

    uintptr_t GetBase()
    {
        return gBase;
    }

    bool IsReady()
    {
        return gBase != 0;
    }
}
