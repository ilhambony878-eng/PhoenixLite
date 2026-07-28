#include "HookEngine.h"
#include "Logger.h"

namespace HookEngine
{
    bool Hook(void* target, void* replace, void** original)
    {
        (void)target;
        (void)replace;

        if (original)
            *original = nullptr;

        Logger::Info("HookEngine::Hook dipanggil.");

        return true;
    }
}
