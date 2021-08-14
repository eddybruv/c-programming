/*Date: 08-08-2021
    by eddybruv
    */

#include <stdio.h>

//function  prototype
void pay_amount(int dollas, int *twenties, int *tens, int *fives, int *ones);

int main(void){
    int dollars, twenties, tens, fives, ones;

    printf("\nEnter a dollar amount: ");
    scanf("%d", &dollars);

    //passing the address of the variables into the function
    pay_amount(dollars, &twenties, &tens, &fives, &ones);

    printf("\n$20 dollar bills: %d", twenties);
    printf("\n$10 dollar bills: %d", tens);
    printf("\n$5 dollar bills: %d", fives);
    printf("\n$1 dollar bills: %d\n\n", ones);

    return 0;
}
//function
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    dollars = dollars - (*twenties * 20);
    *tens = dollars / 10;
    dollars =  dollars - (*tens * 10);
    *fives = dollars / 5;
    *ones = dollars - (*fives * 5);
}