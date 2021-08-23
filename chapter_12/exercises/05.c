#include <stdio.h>

int main(void){
    int a[] = {1, 2, 3, 4, 5};
    int *p;
    p = a;

    /* Illegal
     * Cannot compare pointer and interger*/
    if(p == a[0]) 
        printf("1\n");

    /*correct and true*/
    if(p == &a[0])
        printf("2\n");
    if(*p == a[0])
        printf("3\n");
    if(p[0] == a[0])
        printf("4\n");
    return 0;
}