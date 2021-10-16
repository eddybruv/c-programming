/**
 * Date: 16-10-2021
 * by eddybruv
 **/

#include <stdio.h>
#include <stdlib.h>

#define LENGTH(arr) (int) (sizeof(arr) / sizeof(arr[0]))

typedef struct { 
    int departure_time;
    int arrival_time;
} time_of_flight;

time_of_flight t[] = {
                      {480, 616}, {583, 712}, {679, 811}, {767, 900},
                      {840, 968}, {945, 1075}, {1140, 1280}, {1305, 1438}
                    };

int main(void){
    int desired_time, diff, diff_min, flight_num = 0;
    int time_hr, time_min;
    
    printf("What is your prefered departure time (24-hour format): ");
    scanf("%d:%d", &time_hr, &time_min);

    desired_time = (time_hr * 60) + time_min;

    diff_min = abs(desired_time - t[0].departure_time);

    for(int i = 1; i < LENGTH(t); i++){
        diff = abs(desired_time - t[i].departure_time);

        if(diff < diff_min){
            diff_min = diff;
            flight_num++;
        }
        else 
            break;
    }

    int arr_hr = t[flight_num].arrival_time / 60;
    t[flight_num].arrival_time %= 60;
    int arr_min = t[flight_num].arrival_time;

    int dep_hr = t[flight_num].departure_time / 60;
    t[flight_num].departure_time %= 60;
    int dep_min = t[flight_num].departure_time;

    printf("The closest departure time is: %.2d:%.2d, arriving at: %.2d:%.2d", dep_hr, dep_min, arr_hr, arr_min);

    return 0;
}