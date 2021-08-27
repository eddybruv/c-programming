/*Date: 27-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int hrs, mins;
    char time;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hrs, &mins, &time);

    if(time == 'p'|| time == 'P')
        hrs = hrs + 12;

    printf("Equivalent 24-hour time : %d:%d", hrs, mins);
    return 0;
}