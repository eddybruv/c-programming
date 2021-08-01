/*Date: 01-08-2021 
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int i, n;
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("%10d%10d\n", i, i*i);
        if(i * i < 0){
            break;
        }
    }
    return 0;
}