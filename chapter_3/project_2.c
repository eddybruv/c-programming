/*Date: 23-07-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int item_no, mm, dd, yyyy;
    float unit_price;
    printf("Enter item number: ");
    scanf("%d", &item_no);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date(mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &mm, &dd, &yyyy);
    printf("Item\tUnit\tPurchase\n");
    printf("    \tPrice\tDate\n");
    printf("%d \t$ %.2f\t%.2d/%.2d/%d\n", item_no, unit_price, mm, dd, yyyy);

    return 0;
}