#include <stdbool.h>

bool search(const int a[], int n, int key)
{
    int *p;
    p = a;
    for(p = a; p < a + n; p++)
    {
        if(*p == key)
            return true;
        else 
            return false;
    }
}