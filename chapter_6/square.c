/*Date: 26-07-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of enteries in table: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n){
        printf("%10d%10d\n", i, i * i);
        i++;
    }

    return 0;
}