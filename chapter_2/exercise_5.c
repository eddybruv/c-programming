/* Date: 22-07-2021
    by eddybruv
    */
#include <stdio.h>

int main(void){
    int polynomial,x;
    printf("Input the value of x: ");
    scanf("%d", &x);
    polynomial = 5 * (x*x*x*x*x) + 2 * (x*x*x*x) - 5 * (x*x*x) - (x * x) + 7*x - 6;
    printf("Answer to the polynomial is %d", polynomial);
    return 0;  
}