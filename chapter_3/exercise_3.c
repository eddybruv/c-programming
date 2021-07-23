/*Date: 23-07-2021
    by eddybruv
    */
#include <stdio.h>


int main(void){
    int arr[4][4];
    int row1 = 0, row2 = 0, row3 = 0, row4 = 0;
    int col1 = 0, col2 = 0, col3 = 0, col4 = 0;
    printf("Input numbers from 1 - 16 in any order: ");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &arr[i][j]);
        
        row1 += arr[0][j];
        row2 += arr[1][j]; 
        row3 += arr[2][j];
        row4 += arr[3][j];

        col1 += arr[i][0];
        col2 += arr[i][1];
        col3 += arr[i][2];
        col4 += arr[i][3];

        }
    }
    printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);
    printf("Column Sums: %d %d %d %d\n", col1, col2, col3, col4);

    return 0;

}