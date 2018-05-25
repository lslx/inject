#ifndef __MY_LOG_H__
#define __MY_LOG_H__

#include <android/log.h>

#define __LOG_DEBUG__
#ifdef __LOG_DEBUG__

#define LOG_TAG "2g.out"
#define LOGE(...) ((void)__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__))
#define LOGT(...) ((void)__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__))
#define LOGX(...) ((void)__android_log_print(ANDROID_LOG_ERROR, "OPFOR", __VA_ARGS__))

#else

#define LOGE(...)
#define LOGT(...)
#define LOGW(...)
#define LOGX(...)

#endif

#endif // __MY_LOG_H__
