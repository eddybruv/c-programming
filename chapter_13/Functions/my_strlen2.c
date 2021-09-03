/**
 * This version of strlen computes the length of
 * the string by locating the position of the null character,
 * then subtracting from it the position of the first 
 * character in the string.
 **/

#include <stddef.h>

size_t my_strlen (const char *s)
{
    const char *p = s;
    while (*s)
        s++;
    return s - p;
}
