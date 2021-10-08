/*Date: 31-07-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int len = 0;

    printf("Enter a message: ");
    
    while(getchar() != '\n')
        len++;
    
    printf("Your message was %d characters long.\n", len);
    return 0;
}