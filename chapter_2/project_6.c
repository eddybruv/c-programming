/*Date: 24-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int polynomial,x;
    printf("Input the value of x: ");
    scanf("%d", &x);
    polynomial = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;
    printf("Answer to the polynomial is %d", polynomial);
    return 0; 
}