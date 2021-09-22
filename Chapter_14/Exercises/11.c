/**
 * Date:21-09-2021
 * by eddybruv
 **/
#include <stdio.h>

#define ERROR(s, ...) (fprintf(stderr, (s), __VA_ARGS__))

int main(void)
{
    int index = 0;
    ERROR("Range error: index = %d", index);
    return 0;
}