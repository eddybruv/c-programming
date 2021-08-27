/*Date: 27-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int num1, denom1, num2, denom2, result_num, result_denom;
    char operator; 

    //make sure to use / while inputing.
    printf("Enter two fractions separated by an operator sign: ");
    scanf("%d/%d %c %d/%d", &num1, &denom1, &operator,  &num2, &denom2);

    if(operator == '+'){
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
        printf("The sum is %d/%d\n", result_num, result_denom);
    }

    if(operator == '-'){
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
        printf("The result is %d/%d\n", result_num, result_denom);
    }

    if(operator == '*' ){
        result_num = num1*num2;
        result_denom = denom1*denom2;
        printf("The result is %d/%d\n", result_num, result_denom);
    }

    if(operator == '/'){
        result_num = num1 * denom2;
        result_denom = num2 * denom1;
        printf("The result is %d/%d\n", result_num, result_denom);
    }
    return 0;

}