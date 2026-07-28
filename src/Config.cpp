#include "Config.h"

namespace Config
{
    static bool gDebug = true;

    bool Init()
    {
        return true;
    }

    bool IsDebug()
    {
        return gDebug;
    }
}
