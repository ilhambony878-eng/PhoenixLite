#pragma once

#include <stdint.h>
#include <stddef.h>

namespace Patch
{
    bool Write(void* address, const void* data, size_t size);
    bool NOP(void* address, size_t size);
}
