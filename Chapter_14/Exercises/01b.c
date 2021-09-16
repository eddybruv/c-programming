/**
 * Date:16-09-2021
 * by eddybruv
 **/

#include <stdio.h>

#define REM(x) ((x) % 4)

void main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("The remainder when divided by 4 is: %d", REM(n));
}