/**
 * Date:16-09-2021
 * by eddybruv
 **/

#include <stdio.h>
#include <string.h>

#define TOUPPER(c) ('a' <= (c) && (c) <= 'z'?(c) - 'a' + 'A':(c))

int main()
{
    char s[5];
    int i = 0;
    strcpy(s, "abcd");
    putchar(TOUPPER(s[++i]));
    //Output: D
    
    strcpy(s, "0123");
    i = 0;
    putchar(TOUPPER(s[++i]));
    //Output: 2
    return 0;

    //Final output: D2
}

/**
 * The code output is very much unexpected
 * and wrong. This is because the macro is evaluated 
 * more than once.
 * */