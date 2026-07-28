#include <jni.h>
#include "Logger.h"

extern "C"
JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM*, void*)
{
    Logger::Info("PhoenixLite Loaded");
    return JNI_VERSION_1_6;
}
