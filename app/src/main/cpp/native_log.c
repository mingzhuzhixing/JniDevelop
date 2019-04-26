//
// Created by ZhuMing on 2019/4/26.
//

/**
 * log的使用
 */

#include <jni.h>
#include <android/log.h>

//宏定义log
#define  LOG_TAG    "native-log"
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

JNIEXPORT void JNICALL
Java_com_v_jnidevelop_MainActivity_printLog(JNIEnv *env, jobject instance, jint a, jint b) {

    __android_log_print(ANDROID_LOG_INFO, "hello", "a = %d", a);
    __android_log_print(ANDROID_LOG_INFO, "hello", "b = %d", b);
    __android_log_print(ANDROID_LOG_INFO, "hello", "a + b=%d", (a + b));

    char *strLog = "hello log";
    __android_log_print(ANDROID_LOG_ERROR, "hello", "%s", strLog);

    LOGI("打印log");
}


