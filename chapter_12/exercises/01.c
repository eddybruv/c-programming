#include <stdio.h>

int main(void){
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &a[1], *q = &a[5];

    printf("The value of *(p+3) is: %d\n", * (p+3));
    printf("The value of *(q-3) is: %d\n", * (q-3));
    printf("The value of q-p is: %d\n", q-p);
    if(p < q)
        printf("True (p < q)\n");
    else printf("False !(p < q)\n");
    if(*p > *q) printf("True (*p > *q)\n");
    else printf("False !(*p > *q)\n");

    return 0;
}