/*Date: 03-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int num, a, count = 0;
    long double factorial = 1;
    /*short: highest value for num is 7
     *int: highest value for num is 12
     *long: highest value for num is 16
     *long long: highest value for num is 20
     *float: heighest value for num is 34 and thats bcuz 35 upward
             gives infinity
     *double: heighest value for num is 170 and thats bcuz 170 upward
             gives infinity 
     *long double: I got tired searching :)       
     */
    printf("Enter a positive interger: ");
    scanf("%d", &num);
    a = num;    

    while(num > 0){
        factorial *= num;
        num--;
        if(factorial <= 0)
            printf("This is wrong %d\n", count++);
    } 
    printf("Facttorial of %d: %llf\n", a, factorial);
    return 0;
}