/*Date: 26--8-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int num;
    printf("Enter numerical grade: ");
    scanf("%d", &num);

    printf("Letter Grade: ");
    if(num <= 100 && num > 89)
        printf("A");
    else if(num <= 89 && num > 79)
        printf("B");
    else if(num <= 79 && num > 69)
        printf("C");
    else if(num <= 69 && num > 59)
        printf("D");
    else if(num <= 59 && num > 0)
        printf("F");            
}