/*Date: 28-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int i, n, odd, square;
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    i = 1;
    odd = 3;
    for (square = 1; i <= n; odd += 2){
        printf("%10d%10d\n", i, square);
        ++i;
        square += odd;
    }
    return 0;
}