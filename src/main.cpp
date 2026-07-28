#include <jni.h>
#include <android/log.h>

#define TAG "PhoenixLite"

extern "C"
JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void*)
{
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "PhoenixLite Loaded!"
    );

    return JNI_VERSION_1_6;
}
