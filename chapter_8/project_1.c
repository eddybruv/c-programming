/*Date : 09-08-2021
    by eddybruv
    */

#include <stdbool.h>
#include <stdio.h>

int main(void){
    bool digit_seen[10] = {false}; //every element in the array is false
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);
    
    printf("Repeated digit (s): ");

    while(n > 0){
        digit = n % 10; //stores last digit
        if(digit_seen[digit]){
            printf("%d ", digit);
            // break;
        }    
        digit_seen[digit] = true;
        n /= 10; //chops off last digit
    }
   
    return 0;
}