/*Date: 23-07-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    
    int GSI, identifier, code, number, digit;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GSI, &identifier, &code, &number, &digit);
    printf("GSI prefix: %d", GSI);
    printf("Group identifier: %d", identifier);
    prrintf("Publisher code: %d", code);
    printf("Item number: %d", number);
    printf("Check digit: %d", digit);

    return 0;
}