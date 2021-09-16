/**
 * Date:16-09-2021
 * by eddybruv
 **/

#include <stdio.h>

#define CUBE(x) ((x) * (x) * (x))

void main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("The cube of %d is %d", n, CUBE(n));
}