/*Date: 11-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    float shares, share_price, commission_2, commission;

    printf("Enter number of shares: ");
    scanf("%f", &shares);
    printf("Enter share_price of trade: ");
    scanf("%f", &share_price);

    int value = shares;


    if(value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;

    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;

    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    
    else 
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    if(shares <  2000)
        commission_2 = 33.00f + (share_price * 3);
    if(shares >= 2000)
        commission_2 = 33.00f + (share_price * 2);


    printf("Original Commission: $%.2f\n", commission);
    printf("Rival Broker's commision: $%.2f", commission_2);
    return 0;
}