#include "Patch.h"

#include <unistd.h>
#include <sys/mman.h>
#include <string.h>
#include <stdint.h>

namespace Patch
{
    bool Write(void* address, const void* data, size_t size)
    {
        uintptr_t page =
            (uintptr_t)address & ~(getpagesize() - 1);

        if (mprotect((void*)page,
                     getpagesize(),
                     PROT_READ | PROT_WRITE | PROT_EXEC) != 0)
            return false;

        memcpy(address, data, size);

        mprotect((void*)page,
                 getpagesize(),
                 PROT_READ | PROT_EXEC);

        return true;
    }

    bool NOP(void* address, size_t size)
    {
        memset(address, 0x1F, size);
        return true;
    }
}
