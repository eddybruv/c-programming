/*Date: 02-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    float sum = 0.0f, current = 0.0f;
    char ch;

    printf("Enter expression: ");
    scanf("%f", &sum);

    while ((ch = getchar()) != '\n')
    {
        switch (ch)
        {
        case '+':
            scanf("%f", &current);
            sum += current;
            break;
        case '-':
            scanf("%f", &current);
            sum -= current;
            break;
        case '*':
            scanf("%f", &current);
            sum *= current;
            break;
        case '/':
            scanf("%f", &current);
            sum /= current;
            break;
        
        //skips to nxt iteration if operand is found.
        default:
            continue;
        }
    }
    printf("The sum total is: %.2f", sum);
    return 0;
}