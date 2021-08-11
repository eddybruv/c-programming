/*Date: 11-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int arr[5][5], row_sum = 0, column_sum = 0, i, j;
    
    for(i = 0; i < 5;i++){
        printf("Enter row %d: ", i + 1);
        for(j = 0;j < 5;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nRow totals: ");
    for(i = 0;i < 5;i++){
        for(j = 0; j < 5; j++){
            row_sum += arr[i][j];    
        }
        printf("%d ", row_sum);
        row_sum = 0;
    }

    printf("\nColumn totals: ");
    for(i = 0;i < 5; i++){
        for(j = 0;j < 5; j++){
            column_sum += arr[j][i];
        }
        printf("%d ", column_sum);
        column_sum = 0;
    }
    return 0;
}