/**
 * Date:03-09-2021
 * by eddybruv
 **/

#include <stdio.h>

int main(void)
{
    int dd, mm, yy;
    char *months[] = {"January", "February", "March",
                        "April", "May", "June", "July", "August",
                        "September", "October", "November", "December"};

    printf("Enter a date (mm/dd/yyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yy);

    printf("You entered the date %s %.2d, %d", months[mm-1], dd, yy);
    return 0;
}