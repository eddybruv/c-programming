#include <stdio.h>

int main(void){
    enum {FALSE, TRUE} b;

    int i;

    b = FALSE;      //safe
    b = i;          //not safe
    b++;            //safe
    i = b;          //safe
    i = 2 * b + 1;  //safe

    //don't run without fixing
    printf("i: %d, b: %d", i, b);
    
    return 0;
}