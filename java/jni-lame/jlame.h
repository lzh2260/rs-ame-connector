#pragma once

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class engine_method */

#ifndef _Included_engine_method
#define _Included_engine_method
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     engine_method
 * Method:    RxObjectCreate
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_engine_method_RxObjectCreate
  (JNIEnv *, jclass, jint);

/*
 * Class:     engine_method
 * Method:    RxObjectReference
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_engine_method_RxObjectReference
  (JNIEnv *, jclass, jlong);

/*
 * Class:     engine_method
 * Method:    RxObjectRelease
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_engine_method_RxObjectRelease
  (JNIEnv *, jclass, jlong);

/*
 * Class:     engine_method
 * Method:    RxConfigureSetJson
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_engine_method_RxConfigureSetJson
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     engine_method
 * Method:    RxConfigureSetStr
 * Signature: (JLjava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_engine_method_RxConfigureSetStr
  (JNIEnv *, jclass, jlong, jstring, jstring);

/*
 * Class:     engine_method
 * Method:    RxConfigureSetInt
 * Signature: (JLjava/lang/String;J)J
 */
JNIEXPORT jlong JNICALL Java_engine_method_RxConfigureSetInt
  (JNIEnv *, jclass, jlong, jstring, jlong);

/*
 * Class:     engine_method
 * Method:    RxConfigureSetBool
 * Signature: (JLjava/lang/String;Z)J
 */
JNIEXPORT jlong JNICALL Java_engine_method_RxConfigureSetBool
  (JNIEnv *, jclass, jlong, jstring, jboolean);

/*
 * Class:     engine_method
 * Method:    RxConfigureErase
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_engine_method_RxConfigureErase
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     engine_method
 * Method:    RxConfigureGetStr
 * Signature: (JLjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_engine_method_RxConfigureGetStr
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     engine_method
 * Method:    RxConfigureGetInt
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_engine_method_RxConfigureGetInt
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     engine_method
 * Method:    RxConfigureGetBool
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_engine_method_RxConfigureGetBool
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     engine_method
 * Method:    RxConfigureCloudInit
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_engine_method_RxConfigureCloudInit
  (JNIEnv *, jclass, jlong);

/*
 * Class:     engine_method
 * Method:    RxLameInit
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_engine_method_RxLameInit
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     engine_method
 * Method:    RxLameScan
 * Signature: (JLjava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_engine_method_RxLameScan
  (JNIEnv *, jclass, jlong, jstring, jint);

/*
 * Class:     engine_method
 * Method:    RxLameScanMemory2
 * Signature: (JLjava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_engine_method_RxLameScanMemory2
  (JNIEnv *, jclass, jlong, jstring, jint);

/*
 * Class:     engine_method
 * Method:    RxLameScanMemory
 * Signature: (J[B)J
 */
JNIEXPORT jlong JNICALL Java_engine_method_RxLameScanMemory
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     engine_method
 * Method:    RxSdrGetResult
 * Signature: (J)Lengine/DetectResult;
 */
JNIEXPORT jobject JNICALL Java_engine_method_RxSdrGetResult
  (JNIEnv *, jclass, jlong);

/*
 * Class:     engine_method
 * Method:    RxSdrReleaseResult
 * Signature: (Lengine/DetectResult;)V
 */
JNIEXPORT void JNICALL Java_engine_method_RxSdrReleaseResult
  (JNIEnv *, jclass, jobject);

/*
 * Class:     engine_method
 * Method:    RxLameGetVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_engine_method_RxLameGetVersion
  (JNIEnv *, jclass);

/*
 * Class:     engine_method
 * Method:    RxLameGetVirusLibVersion
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_engine_method_RxLameGetVirusLibVersion
  (JNIEnv *, jclass, jstring);

/*
 * Class:     engine_method
 * Method:    RxLameGetLicenceInfo
 * Signature: (Ljava/lang/String;)Lengine/LicenceInfo;
 */
JNIEXPORT jobject JNICALL Java_engine_method_RxLameGetLicenceInfo
  (JNIEnv *, jclass, jstring);

/*
 * Class:     engine_method
 * Method:    RxLameReleaseLicenceInfo
 * Signature: (Lengine/LicenceInfo;)V
 */
JNIEXPORT void JNICALL Java_engine_method_RxLameReleaseLicenceInfo
  (JNIEnv *, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif

