/*Date: 30-07-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int days, day;

    printf("Enter number of days in a month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &day);

    //number of iterations needed
    int n = days + (day - 1);

    int day_of_the_week = 1;

    for(int i = 1;i <= n;i++){
        if (i < day){
            printf("  ");
        }
        else
            printf("%3d", day_of_the_week++);
        if(i % 7 == 0)
            printf("\n");    
    }

    return 0;
}