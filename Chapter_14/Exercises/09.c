/**
 * Date:21-09-2021
 * by eddybruv
 **/

#include <stdio.h>

#define CHECK(x, y, n) (((x) > (0)) && (x) <= ((n) - 1) && ((y) > (0)) && (y) <= ((n) - 1)) ? 1 : 0
#define MEDIAN(x,y,z) (((x)>=(y)&&(x)<=(z))?(x):((y)>=(x)&&(y)<=(z))?(y):(z))
#define POLYNOMIAL(x) (3*(power((x), 5)) + 2*(power((x), 4)) - 5*(power((x), 3)) - 1*(power((x), 2)) + 7*(x) - 6)

int power(int x, int n);

int main(void){
    printf("check: %d\n", CHECK(2, 3, 4));
    printf("median: %g\n", MEDIAN(3.9, 9.2, 29.8));
    printf("Polynomial: %ld", POLYNOMIAL(9));
}

int power(int n, int x){
    int sum = 1;
    for(int i = 0; i < x; i++ )
        sum *= n;
    return sum;
}