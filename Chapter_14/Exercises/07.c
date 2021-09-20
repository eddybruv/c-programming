/**
 * Date:18-09-2021
 * by eddybruv
 **/

#include <stdio.h>

#define GENERIC_MAX(type)         \
type type##_max(type x, type y)   \
{                                 \
    return x > y ? x : y;         \
}

int main(void){
    GENERIC_MAX(long)

    /**
     * Expands to:
     * long long_max(long x, long y) { return x > y ? x : y; }
     **/
}