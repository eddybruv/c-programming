/*Date: 24-07-2021
    BY eddybruv
    */

#include <stdio.h>

int main(void){
    int num, rev, remainder;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    
    remainder = num % 10;
    num = num / 10;
    rev = num % 10;
    num = num / 10;

    
    printf("Reversed number: %d%d%d\n", remainder, rev,  num);
    return 0;

}