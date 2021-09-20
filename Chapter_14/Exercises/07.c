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

typedef unsigned long unsigned_long;

int main(void){
    GENERIC_MAX(unsigned_long)

    /**
     * GENERIC_MAX(long)
     * Expands to:
     * long long_max(long x, long y) { return x > y ? x : y; }
     **/

    /**
     * GENERIC_MAX(unsigned long)
     * Expands to:
     * unsigned long unsigned long_max(unsigned long x, unsigned long y) { return x > y ? x : y; }
     * 
     * This is faulty because it has a space bar in between the "type name"
     * 
     * We can correct it using the "typedef" keyword and redefine the basic type
     **/ 
}