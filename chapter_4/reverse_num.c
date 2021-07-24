/*Date: 24-07-2021
    BY eddybruv
    */

#include <stdio.h>

int main(void){
    int num, remainder;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    //hint: If n is an interger, thrn n % 10 is the last digit
    //      in n and n/10 is n with the last digit removed.
    remainder = num % 10;
    num = num / 10;

    
    printf("Reversed number: %d%d\n", remainder, num);
    return 0;

}