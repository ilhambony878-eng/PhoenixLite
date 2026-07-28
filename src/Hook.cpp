#include "Hook.h"
#include "Memory.h"
#include <android/log.h>

#define TAG "PhoenixLite"

namespace Hook
{
    void Init()
    {
        uintptr_t gtasa = Memory::GetLibraryBase("libGTASA.so");

        __android_log_print(
            ANDROID_LOG_INFO,
            TAG,
            "libGTASA base = 0x%lx",
            (unsigned long)gtasa
        );
    }
}
