/*Date: 19-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int n;
    printf("Enter the number of values to sort: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d values: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    selection_sort(a, n);

    printf("\nSorted array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
}

void selection_sort(int a[], int n){
    int largest_value = a[n-1], i;
    
    for(i = 0; i < n; i++){
        if(largest_value < a[i]){
            largest_value = a[i];
            int temp = a[n-1];
            a[n - 1] = largest_value;
            a[i] = temp;
        }    
    }    
    printf("\n %d \n", i);
    
    if((n - 1) < 1)
        return;

    selection_sort(a, n - 1);
}