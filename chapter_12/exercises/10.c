#include <assert.h>

int *find_middle(int *a, int n){
    return a + (n/2);
}

int main(void){
    int a[] = {1, 2, 3, 4, 5};

    assert(find_middle(a, 5) == a + 2);
    return 0;
}