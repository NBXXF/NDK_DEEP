//
// Created by Mac on 2018/10/9.
//

#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_xxf_ndk_NDKUtils_getName(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "my name is xxf";
    return env->NewStringUTF(hello.c_str());
}
