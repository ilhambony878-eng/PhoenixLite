#include <jni.h>
#include <android/log.h>
#include <jni.h>
#include "Hook.h"


extern "C"
JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void*)
{
    __android_log_print(
        ANDROID_LOG_INFO,
        "PhoenixLite",
        "PhoenixLite Loaded"

        extern "C"
JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void*)
{
    Hook::Init();
    return JNI_VERSION_1_6;
}

    );

    return JNI_VERSION_1_6;
}
