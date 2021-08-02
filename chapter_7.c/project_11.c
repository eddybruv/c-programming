/*Date: 02-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    printf("Enter a first and last name: ");
    char name, initial_ch;
    while((name = getchar()) == ' ');
    //skip initial white space until first character
    initial_ch = name;

    while((name = getchar() != ' '));
    //skips characters after first char until white space

    while((name = getchar()) != '\n'){
        if(name != ' ')
            putchar(name);
    }
    printf(", %c.", initial_ch);
    return 0;
}