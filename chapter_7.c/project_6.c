/*Date : 01-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    printf("Int: %d bytes\n ", sizeof(int));
    printf("Float: %d bytes\n ", sizeof(float));
    printf("Long int: %d bytes\n ", sizeof(long));
    printf("Short int: %d bytes\n ", sizeof(short));
    printf("Double: %d bytes\n ", sizeof(double));
    printf("Long double: %d bytes\n ", sizeof(long double));
    return 0;
}