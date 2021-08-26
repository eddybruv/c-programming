/*Date: 26-08-2021
    by eddybruv
    */

#include <stdio.h>
int main(void)
{
    int income;
    float tax, over;
    printf("Enter income: ");
    scanf("%d", &income);

    if(income <= 750){
        tax = 0.01 * income;
    }

    if(income > 750 && income <=2250){
        over = income - 750;
        over = over * 0.02;
        tax = 7.50f + over;
    }

    if(income > 2250 && income <= 3750){
        over = income - 2250;
        over = over * 0.03;
        tax = 37.5 + over;
    }

    if(income > 3750 && income <= 5250){
        over = income - 3750;
        over = over * 0.04;
        tax = 82.5 + over;
    }

    if(income > 5250 && income <= 7000){
        over = income - 5250;
        over = over * 0.05;
        tax = 142.5 + over;
    }

    if(income > 7000){
        over = income - 7000;
        over = over * 0.06;
        tax = 230.00 + over;
    }

    printf("Your tax due is: $%.2f", tax);

    return 0;
}