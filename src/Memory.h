#pragma once

#include <cstdint>

namespace Memory
{
    bool Init();

    uintptr_t GetLibraryBase(const char* libName);

    bool IsReady();
}
