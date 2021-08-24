#include <assert.h>

void *store_zeros(int a[], int n)
{
    int *p;
    for(p = a; p < a + n; p++)
        *p++ = 0;
}

int main(void){
    int arr[] = {1, 6, 8, 9, 3};
    store_zeros(arr, 3);

    assert(arr[0] == 0);
    assert(arr[1] == 0);
    assert(arr[2] == 0);
    assert(arr[3] == 0);
    assert(arr[4] == 0);   
}