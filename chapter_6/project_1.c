/*Date: 28-07-2021
    by eddybruv
    */
#include <stdio.h>

int main(void){
    float num, largest_number = 0;
    for(;;){
        printf("Enter a number: ");
        scanf("%f", &num);
        if(num == 0)
            break;
        if(num > largest_number)
            largest_number = num;    
    }

    printf("The largest number is %.3f", largest_number);
    return 0;
}