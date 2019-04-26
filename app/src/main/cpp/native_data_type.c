//
// Created by ZhuMing on 2019/4/26.
//
/**
 * 数据类型
 *
 * byte    类型字节数 ：1
 * boolean 类型字节数 ：1
 * char    类型字节数 ：2
 * short   类型字节数 ：2
 * int     类型字节数 ：4
 * long    类型字节数 ：8
 * float   类型字节数 ：4
 * double  类型字节数 ：8
 *
 */

#include <jni.h>
#include <math.h>

/**
 * 两个数相加
 */
JNIEXPORT jint JNICALL
Java_com_v_jnidevelop_MainActivity_add(JNIEnv *env, jobject instance, jint a, jint b) {
    return a + b;
}

/**
 * 两个数减
 */
JNIEXPORT jshort JNICALL
Java_com_v_jnidevelop_MainActivity_sub(JNIEnv *env, jobject instance, jshort a, jshort b) {
    return a - b;
}

/**
 * 两个数相乘
 */
JNIEXPORT jdouble JNICALL
Java_com_v_jnidevelop_MainActivity_multi(JNIEnv *env, jobject instance, jdouble a, jdouble b) {
    return a * b;
}

/**
 * 除数
 */
JNIEXPORT jlong JNICALL
Java_com_v_jnidevelop_MainActivity_divi(JNIEnv *env, jobject instance, jlong a, jlong b) {
    if (b != 0) {
        return a / b;
    } else {
        return 0;
    }
}

/**
 * 获取字符
 */
JNIEXPORT jchar JNICALL
Java_com_v_jnidevelop_MainActivity_getChar(JNIEnv *env, jobject instance, jchar a) {
    return (jchar) (a + 3);
}

/**
 * 开平方
 */
JNIEXPORT jbyte JNICALL
Java_com_v_jnidevelop_MainActivity_sqrt(JNIEnv *env, jobject instance, jbyte a) {
    return (jbyte) sqrt(a);
}

/**
 * 求一个数的多次方
 */
JNIEXPORT jfloat JNICALL
Java_com_v_jnidevelop_MainActivity_power(JNIEnv *env, jobject instance, jfloat num, jfloat b) {
    jfloat sum=1;
    for (int i = 0; i < b; i++) {
        sum= sum * num;
    }
    return sum;
}

/**
 * 布尔值
 */
JNIEXPORT jboolean JNICALL
Java_com_v_jnidevelop_MainActivity_isTrue(JNIEnv *env, jobject instance, jboolean b) {
    if(b){
        return 1;
    }else{
        return 0;
    }
}


