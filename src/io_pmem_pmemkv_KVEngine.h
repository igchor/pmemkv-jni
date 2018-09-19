/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_pmem_pmemkv_KVEngine */

#ifndef _Included_io_pmem_pmemkv_KVEngine
#define _Included_io_pmem_pmemkv_KVEngine
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_open
 * Signature: (Ljava/lang/String;Ljava/lang/String;J)J
 */
JNIEXPORT jlong JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1open
  (JNIEnv *, jobject, jstring, jstring, jlong);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_close
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1close
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_all
 * Signature: (JLio/pmem/pmemkv/KVAllCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1all
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_all_strings
 * Signature: (JLio/pmem/pmemkv/KVAllStringsCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1all_1strings
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_count
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1count
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_count_like
 * Signature: (J[B)J
 */
JNIEXPORT jlong JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1count_1like
  (JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_each
 * Signature: (JLio/pmem/pmemkv/KVEachCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1each
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_each_like
 * Signature: (J[BLio/pmem/pmemkv/KVEachCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1each_1like
  (JNIEnv *, jobject, jlong, jbyteArray, jobject);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_each_string
 * Signature: (JLio/pmem/pmemkv/KVEachStringCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1each_1string
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_each_string_like
 * Signature: (J[BLio/pmem/pmemkv/KVEachStringCallback;)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1each_1string_1like
  (JNIEnv *, jobject, jlong, jbyteArray, jobject);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_exists
 * Signature: (J[B)Z
 */
JNIEXPORT jboolean JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1exists
  (JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_get
 * Signature: (J[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1get
  (JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_put
 * Signature: (J[B[B)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1put
  (JNIEnv *, jobject, jlong, jbyteArray, jbyteArray);

/*
 * Class:     io_pmem_pmemkv_KVEngine
 * Method:    kvengine_remove
 * Signature: (J[B)V
 */
JNIEXPORT void JNICALL Java_io_pmem_pmemkv_KVEngine_kvengine_1remove
  (JNIEnv *, jobject, jlong, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
