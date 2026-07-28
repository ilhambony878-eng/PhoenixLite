#include <jni.h>
#include <android/log.h>
#include "Hook.h"

extern "C"
JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void*)
{
    __android_log_print(
        ANDROID_LOG_INFO,
        "PhoenixLite",
        "PhoenixLite Loaded"
    );

    Hook::Init();

    return JNI_VERSION_1_6;
}
