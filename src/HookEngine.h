#pragma once

#include <stdint.h>

namespace HookEngine
{
    bool Hook(void* target, void* replace, void** original);
}
