/*Date: 01-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
        int i, n;

    printf("This program printf a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    getchar();

    for(i = 1; i <= n; i++){
        printf("%10d%10d\n", i, i*i);
        while(i % 24 == 0){
            printf("\nPress Enter to continue...\n");
            getchar();
            break;
        }
    }

                
    return 0;
}
