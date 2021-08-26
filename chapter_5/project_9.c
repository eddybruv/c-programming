/*Date: 26-08-2021
    by eddybruv*/

#include <stdio.h>

int main(void)
{
    int mm, dd, yy, days2, days1, mm1, dd1, yy1;
    printf("Enter first date: ");
    scanf("%d/%d/%d", &mm, &dd, &yy);
    days1 = dd + (12 * mm) + (365 * yy);

    printf("Enter second date: ");
    scanf("%d/%d/%d", &mm1, &dd1, &yy1);
    days2 = dd1 + (12 * mm1) + (365 * yy1);

    if(days1 > days2)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", mm1, dd1, yy1, mm, dd, yy);
    if(days2 > days1)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", mm, dd, yy, mm1, dd1, yy1);
    return 0;
}