/*Date: 09-08-2021
    by eddybruv
    */

#include <stdio.h>
#include <stdbool.h>

int main(void){
    bool digit_seen[10] = {false};
    int digit;
    int n, count_0 = 0, count_1 = 0, count_2 = 0, count_3 = 0, count_4 = 0, count_5 = 0, count_6 = 0,
            count_7 = 0, count_8 = 0, count_9 = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Digit:      0  1  2  3  4  5  6  7  8  9\n");
    printf("Occurances: ");
    
    while(n > 0){
        digit = n % 10;
        if(digit_seen[digit]){
            switch(digit){
                case 0:
                    count_0 += 1;
                    break;
                case 1:
                    count_1 += 1;
                    break;
                case 2:
                    count_2 += 1;
                    break;
                case 3:
                    count_3 += 1;
                    break;
                case 4:
                    count_4 += 1;
                    break;
                case 5:
                    count_5 += 1;
                    break;
                case 6:
                    count_6 += 1;
                    break;
                case 7:
                    count_7 += 1;
                    break;
                case 8:
                    count_8 += 1;
                    break;
                case 9:
                    count_9 += 1;
                    break;                                
            }
        }
        digit_seen[digit] = true;
        n /= 10;
    }

    printf("%d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n", count_0, count_1, count_2, count_3, count_4, count_5, count_6, count_7, count_8, count_9);
    return 0;
}