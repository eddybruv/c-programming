/*Date: 03-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int num, a, count = 0;
    long long factorial = 1;
    /*short: highest value for num is 7
     *int: highest value for num is 12
     *long: highest value for num is 16
     *long long: highest value for num is 20
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
    printf("Facttorial of %lld: %lld\n", a, factorial);
    return 0;
}