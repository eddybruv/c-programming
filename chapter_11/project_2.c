/*Date: 14-08-2021
    by eddybruv
    */

#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void){
    int mins, hrs, time_dep, time_arr,
        time_dep_hr, time_dep_min,
        time_arr_hr, time_arr_min;
    printf("\nEnter yout desired travel time: ");
    scanf("%d:%d", &hrs, &mins);

    mins = (hrs * 60) + mins;
    if(mins > 1305)
        printf("Sorry theres no suitable flight");

    find_closest_flight(mins, &time_dep, &time_arr);

    time_dep_hr = time_dep / 60;
    time_dep_min = time_dep % 60;
    time_arr_hr = time_arr / 60;
    time_arr_min = time_arr % 60; 
    printf("Closest departure is %2d:%2d, arriving at %2d:%2d!\n\n",time_dep_hr, time_dep_min, time_arr_hr, time_arr_min);

    return 0;
}

void find_closest_flight(int desired_time, 
                         int *departure_time, 
                         int *arrival_time)

{
    int t8_00 = 480, t10_16 = 616,
        t9_43 = 583, t11_52 = 712,
        t11_19 = 679, t1_31 = 811,
        t12_47 = 767, t3_00 = 900,
        t2_00 = 840, t4_08 = 968,
        t3_45 = 945, t5_55 = 1075,
        t7_00 = 1140, t9_20 = 1280,
        t9_45 = 1305, t11_58 = 1438;

    if(desired_time < 480){
        *departure_time = t8_00;
        *arrival_time = t10_16;
    }

    else if(desired_time < t9_43){
        *departure_time = t9_43;
        *arrival_time = t11_52;
    }

    else if(desired_time < t11_19){
        *departure_time = t11_19;
        *arrival_time = t1_31;
    }

    else if(desired_time < t12_47){
        *departure_time = t12_47;
        *arrival_time = t3_00;
    }

    else if(desired_time < t2_00){
        *departure_time = t2_00;
        *arrival_time = t4_08;
    }

    else if(desired_time < t3_45){
        *departure_time = t3_45;
        *arrival_time = t5_55;
    }

    else if(desired_time < t7_00){
        *departure_time = t7_00;
        *arrival_time = t9_20;
    }

    else{
        *departure_time = t9_45;
        *arrival_time = t11_58;
    }
}  