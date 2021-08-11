/*Date: 11-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int hrs, mins, mins_midnyt;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hrs, &mins);

    mins_midnyt = (60 * hrs) + mins;

    if(mins_midnyt < 480)
        printf("Closest departure time is 8:00 a.m, arriving at 10:16 a.m\n");
    else if(mins_midnyt >= 480 && mins_midnyt < 583)
        printf("Closest departure time is 9:43 a.m, arriving at 11:52 a.m\n");
    else if(mins_midnyt >= 583 && mins_midnyt < 679)
        printf("Closest departure time is 11:19 a.m, arriving at 1:31 p.m\n");
    else if(mins_midnyt >= 679 && mins_midnyt < 767)
        printf("Closest departure time is 12:47 p.m, arriving at 3:31 p.m\n");
    else if(mins_midnyt >= 767 && mins_midnyt < 840)
        printf("Closest departure time is 2:00 p.m, arriving at 4:16 p.m\n");
    else if(mins_midnyt >= 840 && mins_midnyt < 945)
        printf("Closest departure time is 3:45 p.m, arriving at 5:55 p.m\n");
    else if(mins_midnyt >= 945 && mins_midnyt < 1140) 
        printf("Closest departure time is 7:00 p.m, arriving at 9:20 p.m\n");
    else if(mins_midnyt >= 1140 && mins_midnyt < 1433)
        printf("Closest departure time is 9:45 p.m , arriving at 11:58pm");
    else 
        printf("Enter a correct time");

    return 0;
}