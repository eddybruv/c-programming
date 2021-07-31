/*Date: 30-07-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    float e = 1.0f, n;

    printf("Enter a small floating point number: ");
    scanf("%f", &n);

    int term = 1, factorial = 1;

    //infinite loop
    for(;;){
        factorial *= term;

        if(1.0f / factorial < n){
            printf("The term in which e is smaller than n is the %dth term\n", term);
            break;
        }

        e += (1.0f / factorial);
        printf("Term: %d, (1/%d!): %f, Current e: %f\n",term, term, 1.0f/factorial, e);
        term++;
    }

    printf("The value of e is: %f", e);

    return 0;
}