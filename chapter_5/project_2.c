/*Date: 26-07-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int hour, min;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);
    
    switch(hour){
        case 13:
        hour = 1;
        break;
        case 14:
        hour = 2;
        break;
        case 15: 
        hour = 3;
        case 16: 
        hour = 4;
        case 17: 
        hour = 5;
        case 18: 
        hour = 6;
        case 19: 
        hour = 7;
        case 20: 
        hour = 8;
        case 21: 
        hour = 9;
        case 22: 
        hour = 10;
        case 23: 
        hour = 11;
    }

    printf("Equivalent time is: %d:%d %s\n", hour , min);
    return 0;
}