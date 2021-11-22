/**
 * @brief: True or False:
 *       If x is a structure and a is a member of that structure
 *       then (&x)->a is the same as x.a .
 **/

#include <stdio.h>

struct {
    int a;
}x;

int main(void){
    x.a = 8;
 
    printf("%d", (&x)->a);
    // (*x).a == x->a
    // (*&x) == x
    // (&x)->a == x.a
    return 0;
}