/*Date : 04-08-2021
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
    
    while(n > 0){
        digit = n % 10; //stores last digit
        if(digit_seen[digit])
            break;
        digit_seen[digit] = true;
        n /= 10; //chops off last digit
    }

    if(n > 0)
        printf("Repeated digit\n");
    else 
        printf("No repeated digit\n");
        
    return 0;
}