#include <assert.h>

int find_largest(int a[], int n)
{
    int *p = &a[0], max;

    max = *p;
    for (p = a; p < a + n; p++)
        if (*p > max)
            max = *p;

    return max;
}

int main(void){
    int a[] = {1, 2, 3, 5, 4};
    assert(find_largest(a, 5) == 5);
}