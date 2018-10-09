//
// Created by Mac on 2018/10/9.
//

#include <jni.h>
#include <string>
#include <android/log.h>

#define LOG_TAG  "C_TAG"
#define LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)

extern "C" JNIEXPORT jstring JNICALL
Java_com_xxf_ndk_NDKUtils_getName(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "my name is xxf";
    LOGD("==============hello.length=%d",hello.length());
    return env->NewStringUTF(hello.c_str());
}
