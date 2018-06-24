#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

#define INT_BIT 4

int main()
{
    printf("\n\n------------CHAR------------\n");
    printf("CHAR_BIT: %d\n", CHAR_BIT);
    printf("CHAR_BYTE: %d\n", sizeof(char));
    printf("SingedCHAR_MIN: %d\n", SCHAR_MIN);
    printf("SingedCHAR_MAX: %d\n", SCHAR_MAX);
    printf("UnsingedCHAR_MAX: %d\n", UCHAR_MAX);

    printf("\n\n------------SHORT------------\n");
    printf("SHORT_BYTE: %d\n", sizeof(short));
    printf("SingedSHRT_MIN: %d\n", SHRT_MIN);
    printf("SingedSHRT_MAX: %d\n", SHRT_MAX);
    printf("UnsingedSHRT_MAX: %d\n", USHRT_MAX);

    printf("\n\n------------INT------------\n");
    printf("INT_BYTE: %d\n", sizeof(int));
    printf("SingedINT_MIN: %d\n", INT_MIN);
    printf("SingedINT_MAX: %d\n", INT_MAX);
    printf("UnsingedINT_MAX: %u\n", UINT_MAX);

    printf("\n\n------------LONG------------\n");
    printf("LONG_BYTE: %d\n", sizeof(long));
    printf("SingedLONG_MIN: %ld\n", (long)LONG_MIN);
    printf("SingedLONG_MAX: %ld\n", LONG_MAX);
    printf("UnsingedLONG_MAX: %lu\n", ULONG_MAX);

    printf("\n\n------------LONG LONG------------\n");
    printf("LONG_LONG_BYTE: %d\n", sizeof(long long));
    printf("SingedLONG_MIN: %lld\n", (long long)LONG_LONG_MIN);
    printf("SingedLONG_MAX: %lld\n", (long long)LONG_LONG_MAX);
    printf("UnsingedLONG_MAX: %llu\n", (long long)ULONG_LONG_MAX);

    printf("\n\n\x1FU");




    return 0;
}
