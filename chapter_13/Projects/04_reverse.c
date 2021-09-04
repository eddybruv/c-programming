/**
 * Date: 04-09-2021
 * by eddybruv
 **/

#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[])
{
    if(argc > 4)
    {
        printf("To many arguments");
        return 1;
    }

    printf("%s and %s", argv[3], argv[1]);
    return 0;
}