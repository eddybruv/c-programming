/*Date: 23-07-2021
    by eddybruv
    */
#include <stdio.h>


int main(void){
    int i1, i2, i3, i4,
        i5, i6, i7, i8,
        i9, i10, i11, i12,
        i13, i14, i15, i16;
    
    printf("Input numbers from 1 - 16 in any order: ");
    //make sure to use comma(,) and space bar( ) after every input
    scanf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12, &i13, &i14, &i15, &i16);

    int row1 = i1 + i2 + i3 + i4, row2 = i5 + i6 + i7 + i8, row3 = i9 + i10 + i11 + i12 , row4 = i13 + i14 + i15 + i16;
    int col1 = i1 + i5 + i9 + i13, col2 = i2 + i6 + i10 + i14, col3 = i3 + i7 + i11 + i15 , col4 = i4 + i8 + i12 + i16;
    int diag_sum1 = i1 + i6 + i11 + i16, diag_sum2 = i4 + i7 + i10 + i13;


    printf("%d %d %d %d\n", i1, i2, i3, i4);
    printf("%d %d %d %d\n", i5, i6, i7, i8);
    printf("%d %d %d %d\n", i9, i10, i11, i12);
    printf("%d %d %d %d\n", i13, i14, i15, i16);

    printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);
    printf("Column Sums: %d %d %d %d\n", col1, col2, col3, col4);
    printf("Diagonal sums: %d %d\n", diag_sum1, diag_sum2);

    if(row1 == row2 == row3 == row4 == col1 == col2 == col3 ==col4 == diag_sum1 == diag_sum2){
        printf("The numbers form a magic square with the engravement %d%d\n", i14, i15);
    }
    else{
        printf("Number is not a magic number\n");
    }
    return 0;

}