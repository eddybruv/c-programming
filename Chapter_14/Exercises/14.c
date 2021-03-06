/**
 * Date: 22-09-2021
 * by eddybruv
 **/

#include <stdio.h>

#define N = 10
#define INC(x) x+1
#define SUB (x, y) x-y
#define SQR(x) ((x) * (x))
#define CUBE(x) (SQR(x) * (x))
#define M1(x, y) x##y
#define M2(x, y) #x #y

int main(void){
    int a[N], i, j, k, m;

#ifdef N
    i = j;
#else
    j = i;
#endif

    i = 10 * INC(j);
    i = SUB(j, k);
    i = SQR(SQR(j));
    i = CUBE(j);
    i = M1(j, k);
    puts(M2(i, j));

#undef SQR
    i = SQR(j);
#define SQR
    i = SQR(j);

    return 0;
}

/**
After Processing:

int main(void){
    int a[= 10], i, j, k, m;


    i = j;




    i = 10 * j+1;
    i = (x, y) x-y(j, k);
    i = ((((j) * (j))) * (((j) * (j))));
    i = (((j) * (j)) * (j));
    i = jk;
    puts("i" "j");


    i = SQR(j);

    i = (j);

    return 0;
}
**/