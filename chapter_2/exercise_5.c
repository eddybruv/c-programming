/*Date: 22-07-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){

    float money,tax;
    printf("Enter cents and dollars: ");
    scanf("%f", &money);
    tax = (5.0 / 100.0) * money;
    printf("With tax: %.2f", money + tax);
    return 0;
}