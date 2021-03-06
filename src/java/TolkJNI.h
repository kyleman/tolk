/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_davykager_tolk_Tolk */

#ifndef _Included_com_davykager_tolk_Tolk
#define _Included_com_davykager_tolk_Tolk
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_davykager_tolk_Tolk
 * Method:    load
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_davykager_tolk_Tolk_load
  (JNIEnv *, jclass);

/*
 * Class:     com_davykager_tolk_Tolk
 * Method:    isLoaded
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_davykager_tolk_Tolk_isLoaded
  (JNIEnv *, jclass);

/*
 * Class:     com_davykager_tolk_Tolk
 * Method:    unload
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_davykager_tolk_Tolk_unload
  (JNIEnv *, jclass);

/*
 * Class:     com_davykager_tolk_Tolk
 * Method:    trySAPI
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_davykager_tolk_Tolk_trySAPI
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_davykager_tolk_Tolk
 * Method:    preferSAPI
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_davykager_tolk_Tolk_preferSAPI
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_davykager_tolk_Tolk
 * Method:    detectScreenReader
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_davykager_tolk_Tolk_detectScreenReader
  (JNIEnv *, jclass);

/*
 * Class:     com_davykager_tolk_Tolk
 * Method:    hasSpeech
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_davykager_tolk_Tolk_hasSpeech
  (JNIEnv *, jclass);

/*
 * Class:     com_davykager_tolk_Tolk
 * Method:    hasBraille
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_davykager_tolk_Tolk_hasBraille
  (JNIEnv *, jclass);

/*
 * Class:     com_davykager_tolk_Tolk
 * Method:    output
 * Signature: (Ljava/lang/String;Z)Z
 */
JNIEXPORT jboolean JNICALL Java_com_davykager_tolk_Tolk_output
  (JNIEnv *, jclass, jstring, jboolean);

/*
 * Class:     com_davykager_tolk_Tolk
 * Method:    speak
 * Signature: (Ljava/lang/String;Z)Z
 */
JNIEXPORT jboolean JNICALL Java_com_davykager_tolk_Tolk_speak
  (JNIEnv *, jclass, jstring, jboolean);

/*
 * Class:     com_davykager_tolk_Tolk
 * Method:    braille
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_davykager_tolk_Tolk_braille
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_davykager_tolk_Tolk
 * Method:    isSpeaking
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_davykager_tolk_Tolk_isSpeaking
  (JNIEnv *, jclass);

/*
 * Class:     com_davykager_tolk_Tolk
 * Method:    silence
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_davykager_tolk_Tolk_silence
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
