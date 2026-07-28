#include "Memory.h"
#include "Logger.h"

namespace Memory
{
    static bool gReady = false;

    bool Init()
    {
        Logger::Info("Memory Ready");
        gReady = true;
        return true;
    }

    uintptr_t GetLibraryBase(const char* libName)
    {
        (void)libName;

        // Sementara dikembalikan 0.
        // Nanti akan diisi implementasi sebenarnya.
        return 0;
    }

    bool IsReady()
    {
        return gReady;
    }
}
