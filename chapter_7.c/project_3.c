/*Date: 01-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    float n = 1.0f, sum = 0;
    printf("Enter a series of numbers(terminate with 0): ");

    while(n > 0){
        scanf("%f", &n);
        sum += n;
    }
    printf("Total sum is %f", sum);
    return 0;
}