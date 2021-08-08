/*Date: 08-08-2021
    by eddybruv
    */

#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_num, int *reduced_denom);

int main(void){
    int m, n, reduced_m, reduced_n;

    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);

    //do a swap
    if(m > n){
        int temp = m;
        m = n;
        n = temp;
    }

    reduce(m, n, &reduced_n, &reduced_m);

    printf("The simplified form is: %d/%d", reduced_m, reduced_n);

    return 0;
}

void reduce(int numerator,
            int denominator,
            int *reduced_num,
            int *reduced_denum)


{
    int remainder;
    
    //values of numerator and denominator are stored in pointers
    *reduced_num = numerator;
    *reduced_denum = denominator;

    while(denominator > 0){
        remainder = numerator % denominator;
        numerator = denominator;
        denominator = remainder;
    }

    *reduced_num  = *reduced_num / numerator;
    *reduced_denum = *reduced_denum / numerator;
}