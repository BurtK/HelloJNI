#include <jni.h>

JNIEXPORT jstring JNICALL
Java_kr_pe_burt_hellojni_MainActivity_getMessage
(
    JNIEnv *env,
    jobject instance
)
{

    int a = 10;
    int b = 20;
    int sum = a + b;
    return (*env)->NewStringUTF(env, "Hello JNI");

}