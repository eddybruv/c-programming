/*Date: 17-08-2021
    by eddybruv
    */

#include <stdio.h>

#define DAYS 365
#define MONTHS 30

int main(void){
    int mm, dd, yy, days_1, days_2;
    printf("Enter a date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &mm, &dd, &yy);

    days_1 = (MONTHS * mm) + dd + (DAYS * yy);

    while(1)
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%2d/%2d/%2d", &mm, &dd, &yy);

        if(mm == 0 && dd == 0 && yy == 0)
            break;

        days_2 = (MONTHS * mm) + dd + (DAYS * yy);

        if(days_1 > days_2)
            days_1 = days_2;
    }
    
    yy = days_1 / DAYS;
    days_1 %= DAYS;
    mm = days_1 / MONTHS;
    dd = days_1 % MONTHS;

    printf("%.2d/%.2d/%.2d is the earliest day", mm, dd, yy);
    return 0;
}