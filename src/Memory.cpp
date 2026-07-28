#include "Memory.h"

#include <stdio.h>
#include <string.h>

namespace Memory
{
    uintptr_t GetLibraryBase(const char* libName)
    {
        FILE* fp = fopen("/proc/self/maps", "r");
        if (fp == nullptr)
            return 0;

        char line[512];

        while (fgets(line, sizeof(line), fp))
        {
            if (strstr(line, libName))
            {
                uintptr_t base = 0;
                sscanf(line, "%lx", &base);
                fclose(fp);
                return base;
            }
        }

        fclose(fp);
        return 0;
    }
}
