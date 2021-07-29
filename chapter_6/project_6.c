/*Date: 29-07-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    for(int i = 1; (i * i) <= n;i++){
        if((i * i) % 2 == 0){
            printf("%d    %d\n", i, i * i);
        }
    }
    return 0;
}