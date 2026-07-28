LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := PhoenixLite

LOCAL_SRC_FILES := \
    src/main.cpp \
    src/Logger.cpp \
    src/Memory.cpp \
    src/Patch.cpp \
    src/Game.cpp \
    src/Hook.cpp \
    src/HookEngine.cpp \
    src/Shader.cpp

LOCAL_CPPFLAGS := -std=c++17

LOCAL_LDLIBS := -llog -lGLESv3

include $(BUILD_SHARED_LIBRARY)
