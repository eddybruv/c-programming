/*Date : 22-02-2021
    by eddybruv
    */

//Computes the dimensional weight of a 12 x 10 x 8 box

#include <stdio.h>

int main(void){
    int height, length, width, volume, weight;

    height = 8;
    length = 12.0;
    width = 10;
    volume = (volume + 165)  / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Voulume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d \n", weight);

    return 0;
}
