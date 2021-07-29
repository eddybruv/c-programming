/*Date: 29-07-2021
    BY eddybruv
    */

#include <stdio.h>

int main(void){
    int num, remainder;
    printf("Enter any number: ");
    scanf("%d", &num);

    //hint: If n is an interger, thrn n % 10 is the last digit
    //      in n and n/10 is n with the last digit removed.
    
    printf("Reversed number: ");
    do{
        remainder = num % 10;
        num = num / 10;
        printf("%d", remainder);
    }while(num > 0);
    
    
    return 0;

}