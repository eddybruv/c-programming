/**
 * @brief: Create a fxn that returns a poiinter to a
 * dynamically allocated int array with n members, each of which
 * is initialized to initial_value. The return should be NULL if the 
 * array cant be allocated.
 **/

#include <stdio.h>
#include <stdlib.h>

int *create_array(int, int);

int main(void){
    int *arr, n, initial_value;
    printf("Enter size of array and initial value: ");
    //size, initial_value
    scanf("%d, %d", &n, &initial_value);

    arr = create_array(n, initial_value);

    if(arr == NULL){
        fprintf(stderr, "Memory not allocated!\n");
        return 1;
    }

    printf("Size of array: %d.\nElements: ", n);
    for(int i = 0;i < n;i++)
        printf("%d ", arr[i]);

    return 0;
}

int *create_array(int n, int i){
    int *arr;
    arr = (int *) malloc((sizeof(int)) * n);

    if (arr == NULL){
        fprintf(stderr, "Memory not allocated!\n");
        return NULL;
    }

    for(int x = 0; x < n;x++)
        arr[x] = i;

    return arr;
}