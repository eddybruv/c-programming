/**
 * Date: 22-09-2021
 * by eddybruv
 **/

#include <stdio.h>

#define ENGLISH

int main(void)
{
#ifdef ENGLISH
    printf("Insert disk 1\n");
#elif defined(FRENCH)
    printf("Inserez Le Disque 1\n");
#elif defined(SPANISH)
    printf("Inserte El Disco 1\n");
#endif
    return 0;
}