/*  
    Date: 21-08-2021
    by eddybruv
*/

#include <stdio.h>

long factorial(int);
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The factorial of %d is: %ld", n, factorial(n));

    return 0;
}

long factorial(int fact){
    if(fact <= 1)
        return 1;
    else    
        return fact * factorial(fact - 1); 
}