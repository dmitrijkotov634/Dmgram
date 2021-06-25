// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/webrtc/audio/WebRtcAudioTrack

#ifndef org_webrtc_audio_WebRtcAudioTrack_JNI
#define org_webrtc_audio_WebRtcAudioTrack_JNI

#include <jni.h>

#include "webrtc/sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_audio_WebRtcAudioTrack[];
const char kClassPath_org_webrtc_audio_WebRtcAudioTrack[] = "org/webrtc/audio/WebRtcAudioTrack";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_webrtc_audio_WebRtcAudioTrack_clazz(nullptr);
#ifndef org_webrtc_audio_WebRtcAudioTrack_clazz_defined
#define org_webrtc_audio_WebRtcAudioTrack_clazz_defined
inline jclass org_webrtc_audio_WebRtcAudioTrack_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_audio_WebRtcAudioTrack,
      &g_org_webrtc_audio_WebRtcAudioTrack_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace  webrtc {
namespace jni {

JNI_GENERATOR_EXPORT void Java_org_webrtc_audio_WebRtcAudioTrack_nativeCacheDirectBufferAddress(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeAudioTrackJni,
    jobject byteBuffer) {
  AudioTrackJni* native = reinterpret_cast<AudioTrackJni*>(nativeAudioTrackJni);
  CHECK_NATIVE_PTR(env, jcaller, native, "CacheDirectBufferAddress");
  return native->CacheDirectBufferAddress(env, base::android::JavaParamRef<jobject>(env,
      byteBuffer));
}

JNI_GENERATOR_EXPORT void Java_org_webrtc_audio_WebRtcAudioTrack_nativeGetPlayoutData(
    JNIEnv* env,
    jclass jcaller,
    jlong nativeAudioTrackJni,
    jint bytes) {
  AudioTrackJni* native = reinterpret_cast<AudioTrackJni*>(nativeAudioTrackJni);
  CHECK_NATIVE_PTR(env, jcaller, native, "GetPlayoutData");
  return native->GetPlayoutData(env, bytes);
}


static std::atomic<jmethodID> g_org_webrtc_audio_WebRtcAudioTrack_Constructor(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_WebRtcAudioTrack_Constructor(JNIEnv* env,
    const base::android::JavaRef<jobject>& context,
    const base::android::JavaRef<jobject>& audioManager) {
  jclass clazz = org_webrtc_audio_WebRtcAudioTrack_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_webrtc_audio_WebRtcAudioTrack_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "<init>",
          "(Landroid/content/Context;Landroid/media/AudioManager;)V",
          &g_org_webrtc_audio_WebRtcAudioTrack_Constructor);

  jobject ret =
      env->NewObject(clazz,
          call_context.base.method_id, context.obj(), audioManager.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_org_webrtc_audio_WebRtcAudioTrack_setNativeAudioTrack(nullptr);
static void Java_WebRtcAudioTrack_setNativeAudioTrack(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jlong nativeAudioTrack) {
  jclass clazz = org_webrtc_audio_WebRtcAudioTrack_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_audio_WebRtcAudioTrack_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setNativeAudioTrack",
          "(J)V",
          &g_org_webrtc_audio_WebRtcAudioTrack_setNativeAudioTrack);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, nativeAudioTrack);
}

static std::atomic<jmethodID> g_org_webrtc_audio_WebRtcAudioTrack_initPlayout(nullptr);
static jint Java_WebRtcAudioTrack_initPlayout(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, JniIntWrapper sampleRate,
    JniIntWrapper channels,
    jdouble bufferSizeFactor) {
  jclass clazz = org_webrtc_audio_WebRtcAudioTrack_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_audio_WebRtcAudioTrack_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "initPlayout",
          "(IID)I",
          &g_org_webrtc_audio_WebRtcAudioTrack_initPlayout);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id, as_jint(sampleRate), as_jint(channels), bufferSizeFactor);
  return ret;
}

static std::atomic<jmethodID> g_org_webrtc_audio_WebRtcAudioTrack_startPlayout(nullptr);
static jboolean Java_WebRtcAudioTrack_startPlayout(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_audio_WebRtcAudioTrack_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_audio_WebRtcAudioTrack_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "startPlayout",
          "()Z",
          &g_org_webrtc_audio_WebRtcAudioTrack_startPlayout);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_webrtc_audio_WebRtcAudioTrack_stopPlayout(nullptr);
static jboolean Java_WebRtcAudioTrack_stopPlayout(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_audio_WebRtcAudioTrack_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_audio_WebRtcAudioTrack_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "stopPlayout",
          "()Z",
          &g_org_webrtc_audio_WebRtcAudioTrack_stopPlayout);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_webrtc_audio_WebRtcAudioTrack_getStreamMaxVolume(nullptr);
static jint Java_WebRtcAudioTrack_getStreamMaxVolume(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_audio_WebRtcAudioTrack_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_audio_WebRtcAudioTrack_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getStreamMaxVolume",
          "()I",
          &g_org_webrtc_audio_WebRtcAudioTrack_getStreamMaxVolume);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_webrtc_audio_WebRtcAudioTrack_setStreamVolume(nullptr);
static jboolean Java_WebRtcAudioTrack_setStreamVolume(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper volume) {
  jclass clazz = org_webrtc_audio_WebRtcAudioTrack_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_audio_WebRtcAudioTrack_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setStreamVolume",
          "(I)Z",
          &g_org_webrtc_audio_WebRtcAudioTrack_setStreamVolume);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id, as_jint(volume));
  return ret;
}

static std::atomic<jmethodID> g_org_webrtc_audio_WebRtcAudioTrack_getStreamVolume(nullptr);
static jint Java_WebRtcAudioTrack_getStreamVolume(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_audio_WebRtcAudioTrack_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_audio_WebRtcAudioTrack_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getStreamVolume",
          "()I",
          &g_org_webrtc_audio_WebRtcAudioTrack_getStreamVolume);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_webrtc_audio_WebRtcAudioTrack_GetPlayoutUnderrunCount(nullptr);
static jint Java_WebRtcAudioTrack_GetPlayoutUnderrunCount(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_audio_WebRtcAudioTrack_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_audio_WebRtcAudioTrack_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "GetPlayoutUnderrunCount",
          "()I",
          &g_org_webrtc_audio_WebRtcAudioTrack_GetPlayoutUnderrunCount);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_webrtc_audio_WebRtcAudioTrack_getBufferSizeInFrames(nullptr);
static jint Java_WebRtcAudioTrack_getBufferSizeInFrames(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_audio_WebRtcAudioTrack_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_audio_WebRtcAudioTrack_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getBufferSizeInFrames",
          "()I",
          &g_org_webrtc_audio_WebRtcAudioTrack_getBufferSizeInFrames);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_webrtc_audio_WebRtcAudioTrack_getInitialBufferSizeInFrames(nullptr);
static jint Java_WebRtcAudioTrack_getInitialBufferSizeInFrames(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_audio_WebRtcAudioTrack_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_audio_WebRtcAudioTrack_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getInitialBufferSizeInFrames",
          "()I",
          &g_org_webrtc_audio_WebRtcAudioTrack_getInitialBufferSizeInFrames);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

}  // namespace jni
}  // namespace  webrtc

// Step 4: Generated test functions (optional).


#endif  // org_webrtc_audio_WebRtcAudioTrack_JNI
