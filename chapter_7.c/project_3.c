/*Date: 01-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    double n, sum = 0;
    printf("Enter a series of numbers(terminate with 0): ");

    scanf("lf", &n);
    while(n > 0){
        scanf("%lf", &n);
        sum += n;
    }
    printf("Total sum is %f", sum);
    return 0;
}