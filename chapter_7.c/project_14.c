/*Date: 02-08-2021
    by eddybruv
    */

#include <stdio.h>
#include <math.h>

int main(void){
    float x, y = 1.0f, avg = 0.0;
    printf("Enter positive number: ");
    scanf("%f", &x);

    while (x != y){
        float div = x/y;
        avg = (div + y)/2;
        
        if(fabs(y - avg) < (.00001) * avg)
        break;
        
        y = avg;
    }    
    printf("Square root: %f", y);
    return 0;
}