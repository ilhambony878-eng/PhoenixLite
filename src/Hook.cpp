#include "Hook.h"
#include <android/log.h>

#define TAG "PhoenixLite"

namespace Hook
{
    void Init()
    {
        __android_log_print(
            ANDROID_LOG_INFO,
            TAG,
            "Hook initialized"
        );
    }
}
