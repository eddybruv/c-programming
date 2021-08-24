/*Date: 24-08-2021
    by eddybruv*/

#include <stdio.h>

int main(void)
{
    float loan, rate, payment;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    float first_payment = (loan - payment) +  (((rate / 100) / 12) * 20000);
    float second_payment = (first_payment - payment) + (((rate / 100) / 12) * first_payment);
    float third_payment = (second_payment - payment) + (((rate / 100) / 12) * second_payment);

    printf("Payment remaining after first payment: $%.2f\n", first_payment);
    printf("Payment remaining after second payment: $%.2f\n", second_payment);
    printf("Payment remaining after third payment: $%.2f\n", third_payment); 
}