/*Date: 25-08-2021
    by eddybruv*/

#include <stdio.h>

int main(void)
{
    int first, second, third;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%3d) %3d-%4d", &first, &second, &third);
    printf("You entered: %.3d.%.3d.%.4d", first, second, third);
    return 0;
}