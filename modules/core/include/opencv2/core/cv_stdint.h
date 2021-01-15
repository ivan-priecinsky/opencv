#ifndef __OPENCV_STDINT_H__
#define __OPENCV_STDINT_H__

#if (!defined UNDER_CE && (defined(_MSC_VER) && _MSC_VER < 1600))
typedef   signed char           int8_t;
typedef unsigned char          uint8_t;
typedef   signed short          int16_t;
typedef unsigned short         uint16_t;
typedef   signed int            int32_t;
typedef unsigned int           uint32_t;
typedef          long long int  int64_t;
typedef unsigned long long int uint64_t;
#else
#include <stdint.h>
#endif

#endif //__OPENCV_STDINT_H__
