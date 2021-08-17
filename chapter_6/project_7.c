/*Date: 17-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int i, n, odd, square;
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    i = 1;
    odd = 3;
    for (square = 1; i <= n; odd += 2, ++i){
        printf("%10d%10d\n", i, square);
        square += odd;
    }
    return 0;
}