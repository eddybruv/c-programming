/*Date: 11-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    float knots;
    printf("Enter the speed of the wind: ");
    scanf("%f", &knots);

    if(knots < 1)
        printf("The wind is Calm\n");

    else if(knots >= 1 && knots <= 3)
        printf("We have light air\n");

    else if(knots >= 4 && knots <= 27)
        printf("Omo breeze\n");
    
    else if(knots >= 28 && knots <= 47)
        printf("Gale\n");

    else if(knots >= 48 && knots <= 63)
        printf("Theres a Storm coming\n");

    else if(knots > 63)
        printf("HURRICANE!!!\n"); 

    return 0; 
}