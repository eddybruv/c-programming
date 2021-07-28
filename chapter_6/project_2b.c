/*Date: 28-07-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int m, n, i, gcd;
    printf("Enter two intergers: ");
    scanf("%d%d", &m, &n);

    for(i = 1; i <= m && i <= n; ++i){
        if((m % i == 0) && (n % i == 0))
            gcd = i;
    }

    printf("The gcd of the two numbers is %d", gcd);
    return 0;
}
