/*Date: 26-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int num1, num2, num3, num4, largest, smallest;
    printf("Enter four intergers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    largest = smallest = num1;
    if(largest < num2)
        largest = num2;
    if(largest < num3)
        largest = num3;
    if(largest < num4)
        largest = num4;

    if(smallest > num2)
        smallest = num2;
    if(smallest > num3)
        smallest = num3;
    if(smallest > num4)
        smallest = num4;
    
    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}