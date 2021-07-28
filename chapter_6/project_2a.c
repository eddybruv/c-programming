/*Date: 28-07-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int m, n, r, gcd;
    printf("Enter two intergers: ");
    scanf("%d%d", &m, &n);

    while(n > 0){
        r = m % n;
        m = n;
        n = r;
    }

    printf("GCD is: %d\n", m);

}