/**
 * Date: 22-09-2021
 * by eddybruv
 **/

#include <stdio.h>

#define IDENT (x) PRAGMA(ident #x)
#define PRAGMA (x) _Pragma(#x)

int main(void)
{
    IDENT(foo);
}

/**
int main(void)
{
    (x) (x) _Pragmax)(ident #x)(foo);
}
**/