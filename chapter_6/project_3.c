/*Date: 29-07-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int m, n, r;
    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);

    int d = n;
    while(n > 0){
        r = m % n;
        m = n;
        n = r;
    }

    printf("In lower terms: %d/%d", (m/m), (d/m));
    return 0;

}