/*Date: 30-07-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int n;
    float e = 1.0f;

    printf("Enter a number: ");
    scanf("%d", &n);

    int factorial = 1;
    for (int i = 1; i <= n; i++) {

        //calculating the factorial after every iteration
        factorial *= i;

        e += (1.0f / factorial);
    }

    printf("The value of e is: %f", e);
    return 0;
}