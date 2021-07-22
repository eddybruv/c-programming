/*Date: 22-07-2021
    by eddybruv
    */

#include <stdio.h>

#define FRACTION 4.0f / 3.0f
#define PI 3.14f

int main(void){
    int volume, radius = 10;
    volume = FRACTION * PI *(radius * radius * radius);
    printf("The volume of the 10m raadius sphere is %dm", volume);
    return 0;
}