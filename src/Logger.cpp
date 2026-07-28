#include "Logger.h"
#include <android/log.h>

#define TAG "PhoenixLite"

void Logger::Info(const char* text)
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "%s",
        text
    );
}

void Logger::Error(const char* text)
{
    __android_log_print(
        ANDROID_LOG_ERROR,
        TAG,
        "%s",
        text
    );
}
