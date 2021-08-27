/*Date: 27-08-2021
    by eddybruv*/

#include <stdio.h>

int main(void)
{
    float loan, rate, payment, num;
    int i;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    printf("Enter number of payments: ");
    scanf("%f", &num);
    
    for(i = 1; i <= num; i++){
        loan = (loan - payment) +  (((rate / 100) / 12) * loan);    
        printf("Balance remaining after %d", i);

        if(i == 11||i == 12||i == 13)
            printf("th");
        else if(i % 10 == 1)
            printf("st");
        else if(i % 10 == 2)
            printf("nd");
        else if(i  % 10 == 3)
            printf("rd");
        else 
            printf("th");

        printf(" payment: $%.2f\n", loan);
    }

    return 0;
}