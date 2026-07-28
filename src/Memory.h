#pragma once

#include <cstdint>

namespace Memory
{
    bool Init();

    uintptr_t GetBase();

    bool IsReady();
}
