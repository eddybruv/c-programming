/*Date: 26-07-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if(num >= 0 && num <= 9 )
        printf("Number has 1 digit\n");
    if (num >= 10 && num <= 99)
        printf("Number has 2 digits\n");
    
    if (num >= 100 && num <= 999)
        printf("Number has 3 digits\n");

    return 0;
}    