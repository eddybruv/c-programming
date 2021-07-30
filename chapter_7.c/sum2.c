/*Date: 30-07-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    long n, sum = 0;

    printf("Enter intergers (0 to terminate): ");

    scanf("%ld", &n);
    while(n != 0){
        sum += n;
        scanf("ld", &n);
    }

    printf("The sum is: %ld\n", sum);
    return 0;
}