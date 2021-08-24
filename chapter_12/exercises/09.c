#include <assert.h>

double inner_product(const double *a, const double *b, int n)
{
   double sum = 0;
   for(n; n > 0; n--)
        sum += (*a++ * *b++);

    return sum;
}

int main(void){
    double a[] = {6, 7, 8 ,9, 10};
    double b[] = {1, 2, 3, 4, 5};

    double sum = inner_product(a, b, 5);
    assert(sum == 130);
    return 0;
}