/**
 * Date: 05-09-2021
 * by eddybruv
 **/

#include <stdio.h>

int main(void){
    int num, reverse;
    char *tens[] = {
        "Twenty ", "Thirty ", "Fourty ", "Fifthy ", 
        "Sixty ", "Seventy ", "Eighty ", "Ninety "
    };

    char *digit[] = {
        "One", "Two", "Three", "Four", "Five", 
        "Six", "Seven", "Eight", "Nine"
    };

    char *teens[] = {
        "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", 
        "Sixteen", "Seventeen", "Eighteen", "Nineteen"
    };

    printf("Enter a two digit number: ");
    scanf("%d", &num);

    reverse = num % 10;
    num = num / 10;

    printf("You entered the number ");
    if(num > 1){
        printf("%s", tens[num - 2]);
        if(reverse >= 1)
            printf("%s", digit[reverse - 1]);
    }
    else{
        printf("%s", teens[reverse - 1]);
    }

    return 0;
}