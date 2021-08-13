/*Date: 13-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int time_dep[] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int time_arr[] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    int hrs, mins, min_midnyt, closest_time;
    printf("\nEnter desired departure time: ");
    scanf("%d:%d", &hrs, &mins);

    min_midnyt = (60 * hrs) + mins;

    closest_time = time_dep[0];
    for(int i = 0; i < 8; i++)
        if((min_midnyt - time_dep[i]) < (min_midnyt - closest_time))
            closest_time = time_dep[i];


    if(closest_time == time_dep[0])
        printf("Closest departure time is 8:00 a.m, arriving at 10:25 a.m\n");
    else if(closest_time == time_dep[1])
        printf("Closest departure time is 9:43 a.m, arriving at 11:52 a.m\n");                
    else if(closest_time == time_dep[2])
        printf("Closest departure time is 11:19 a.m, arriving at 1:31 p.m\n");
    else if(closest_time == time_dep[3])
        printf("Closest departure time is 12:47 p.m, arriving at 3:31 p.m\n");                
    else if(closest_time == time_dep[4])
        printf("Closest departure time is 2:00 p.m, arriving at 4:16 p.m\n");               
    else if(closest_time == time_dep[5])
        printf("Closest departure time is 3:45 p.m, arriving at 5:55 p.m\n");
    else if(closest_time == time_dep[6])
        printf("Closest departure time is 7:00 p.m, arriving at 9:20 p.m\n");
    else if(closest_time == time_dep[7])
        printf("Closest departure time is 9:45 p.m , arriving at 11:58pm");    
            
        printf("\n\n");
    return 0;
}