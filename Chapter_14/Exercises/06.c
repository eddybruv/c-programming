/** 
 * Date: 18-09-2021
 * by eddybruv
 **/

#include <stdio.h>
#include <math.h>

#define DISP(f, x) (printf(#f"(%g) = %g\n", (double)x, f((double)x)));
#define DISP2(f, x, y) (printf(#f"(%g, %g) = %g\n",(double)x, (double)y, f(x, y)));

int main(void){
    DISP(sqrt, 3.0);
    DISP2(pow, 6, 7);
}