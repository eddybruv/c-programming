/*Date: 24-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int dollars, twenties, tens, fives, ones;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);

    twenties = dollars / 20;
    dollars = dollars - (twenties * 20);
    tens = dollars / 10;
    dollars = dollars - (tens * 10);
    fives = dollars / 5;
    ones = dollars - (fives * 5);

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", ones);

    return 0;
}