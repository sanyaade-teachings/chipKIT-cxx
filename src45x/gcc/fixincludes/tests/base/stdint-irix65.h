/*  DO NOT EDIT THIS FILE.

    It has been auto-edited by fixincludes from:

	"fixinc/tests/inc/stdint-irix65.h"

    This had to be done to correct non-standard usages in the
    original, manufacturer supplied header file.  */



#if defined( IRIX_STDINT_C99_TYPES_CHECK )
#define INT64_MIN               (-0x7fffffffffffffffLL - 1)
#define INT64_MAX               0x7fffffffffffffffLL
#define UINT32_MAX              0xffffffffU
#define UINT64_MAX              0xffffffffffffffffULL
#define INTPTR_MIN              (-0x7fffffffL - 1)
#define INTPTR_MAX              0x7fffffffL
#define UINTPTR_MAX             0xffffffffUL
#define INTPTR_MIN              (-0x7fffffffffffffffL - 1)
#define INTPTR_MAX              0x7fffffffffffffffL
#define UINTPTR_MAX             0xffffffffffffffffUL
#define PTRDIFF_MIN             (-0x7fffffffffffffffL - 1)
#define PTRDIFF_MAX             0x7fffffffffffffffL
#define SIZE_MAX                0xffffffffffffffffUL
#endif  /* IRIX_STDINT_C99_TYPES_CHECK */


#if defined( IRIX_STDINT_C99_MACROS_CHECK )
#define INT8_C(x)               (x)
#define INT16_C(x)              (x)
#define INT32_C(x)              (x)
#define INT64_C(x)              (x ## LL)
#define UINT8_C(x)              (x)
#define UINT16_C(x)             (x)
#define UINT32_C(x)             (x ## U)
#define UINT64_C(x)             (x ## ULL)
#define INTMAX_C(x)             (x ## LL)
#define UINTMAX_C(x)            (x ## ULL)
#endif  /* IRIX_STDINT_C99_MACROS_CHECK */
