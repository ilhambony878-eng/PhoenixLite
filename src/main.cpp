#include <jni.h>
#include "Hook.h"

extern "C"
JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void*)
{
    Hook::Init();
    return JNI_VERSION_1_6;
}
