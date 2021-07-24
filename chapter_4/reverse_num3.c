/*Date: 24-07-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int a, b, c;
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &a, &b, &c);

    printf("Reversed number is: %d%d%d", c, b, a);
    return 0;
}