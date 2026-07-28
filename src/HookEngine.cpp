#include "HookEngine.h"
#include "Logger.h"

namespace HookEngine
{
    bool Init()
    {
        Logger::Info("HookEngine Ready");
        return true;
    }

    bool Hook(
        void* target,
        void* replace,
        void** original)
    {
        (void)target;
        (void)replace;
        (void)original;

        return false;
    }
}
