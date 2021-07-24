/*Date: 24-07-2021
    by eddybruv
    */

#include <stdio.h>
int main(void){
    int dec_num, oct1 = 0, oct2, oct3, oct4, oct5;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", dec_num);

    oct5 = dec_num % 8;
    dec_num = dec_num / 8;
    oct4 = dec_num % 8;
    dec_num = dec_num / 8;
    oct3 = dec_num % 8;
    dec_num = dec_num / 8;
    oct2 = dec_num % 8;
    dec_num = dec_num / 8;
    oct1 = dec_num % 8;

    printf("In octal, your number is: %d%d%d%d%d", oct1, oct2, oct3, oct4, oct5);
    return 0;
}