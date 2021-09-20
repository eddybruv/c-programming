/**
 * Date:16-09-2021
 * by eddybruv
 **/

#include <stdio.h>

#define NELEMS(a) (sizeof(a) / sizeof(a[0]))

int main(void){
    //can be changed to an array of characters
    //results are different
    int a[] = {3, 5, 6, 7, 2 ,1 , 5, 9};
    printf("Number of elements: %d", NELEMS(a));
    return 0;
}