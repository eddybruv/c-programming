/**
 * Date:16-09-2021
 * by eddybruv
 **/

#include <stdio.h>

#define PRO(x, y) (((x) * (y) > 100)? 1 : 0)

void main(){
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d, %d", &x, &y);
    printf("The value returned is %d", PRO(x, y));
}