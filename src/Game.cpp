#include "Game.h"
#include "Memory.h"
#include "Logger.h"

static uintptr_t gBase = 0;

namespace Game
{
    bool Init()
    {
        gBase = Memory::GetLibraryBase("libGTASA.so");

        if (!gBase)
        {
            Logger::Error("libGTASA tidak ditemukan.");
            return false;
        }

        Logger::Info("libGTASA berhasil ditemukan.");
        return true;
    }

    uintptr_t Base()
    {
        return gBase;
    }

    uintptr_t Addr(uintptr_t offset)
    {
        return gBase + offset;
    }
}
