/*Date : 25-08-2021
    by eddybruv*/

#include <stdio.h>

int main(void){
    int yyyy, mm, dd;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &mm, &dd, &yyyy);
    printf("You entered the date %d%.2d%.2d", yyyy, mm ,dd);
    return 0;
}