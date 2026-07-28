#pragma once

#include <stdint.h>

namespace Game
{
    bool Init();

    uintptr_t Base();

    uintptr_t Addr(uintptr_t offset);
}
