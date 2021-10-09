#include <stdio.h>

long fibonaci(int );
int main(void){
    int n;
    printf("Enter number the term: ");
    scanf("%d", &n);
    // fibonaci(n);
    printf("The value in the %dth term is: %ld", n, fibonaci(n));
    return 0;
}

long fibonaci(int n){
    long initial = 1, next = 2, fib;
    for(int i = 2; i < n - 1; i++){
        fib = initial + next;
        initial = next;
        next = fib;
    } 
    return fib;
}