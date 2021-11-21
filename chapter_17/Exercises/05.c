/**
 * @brief: some test cases
 **/

#include <stdlib.h>

struct {
    union{
        char a, b;
        int c;
    }d;
    int e[6];
}f, *p = &f;


int main(void){
    p->b = ' ';         //wrong  f.d.b = ' ';
    p->e[3] = 10;       //correct;
    (*p).d.a = "*";     //correct;
    p->d->c = 20;       //wrong  f.d.c = 20;

    return 0;
}