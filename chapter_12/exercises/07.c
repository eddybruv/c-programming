#include <stdbool.h>
#include <assert.h>

bool search(const int a[], int n, int key)
{
    for(n; n > 0; n--)
    {
        if(*a++ == key)
            return true;
        else 
            return false;
    }
}

int main(void){
    int arr[] = {1, 2, 3 ,4, 5};
    assert(search(arr, 5, 1) == true);
    assert(search(arr, 5, 2) == false);

    return 0;
}