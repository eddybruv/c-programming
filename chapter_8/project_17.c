/**
 * Date: 29-08-2021
 * by eddybruv
 * */

#include <stdio.h>

int main(void){
    int size, row, col, pre_row, pre_col;

    printf("Enter the size of the magic square ");
    printf("(must be an odd number between 1 - 99): ");
    scanf("%d", &size);

    if(size < 1 || size > 99 || size % 2 == 0){
        printf("Invalid size");
        return 1;
    }

    int magic_sqr[size][size];

    for ( row = 0; row < size; row++){
        for (col = 0; col < size; col++)
            magic_sqr[row][col] = 0;
    }

    row = 0;
    col = size / 2;

    for(int i = 0; i < size * size;i++){
        magic_sqr[row][col] = i + 1;

        pre_row = row;
        pre_col = col;

        if(row - 1 < 0){
            row = size - 1;
        }
        else{
            row--;
        }
        if(col + 1 > size - 1){
            col = 0;
        }
        else{
            col++;
        }

        if(magic_sqr[row][col] != 0){
            row = pre_row + 1;
            col = pre_col;
        }
    }

    for (row = 0; row < size; row++)
    {
        for(col = 0; col < size; col++){
            printf("%5d", magic_sqr[row][col]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}