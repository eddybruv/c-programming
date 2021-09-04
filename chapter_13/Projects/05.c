/**
 * Date: 04-09-2021
 * by eddybruv
 **/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int sum = 0;
    for(int i = 1; i < argc; i++)
        sum += atoi(argv[i]);

    printf("The sum is: %d", sum);

    return 0;
}