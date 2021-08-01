/*Date: 01-08-2021
    by eddybruv
    */

#include <stdio.h>
#include <ctype.h>

int main(void){
    char num;
    printf("Enter number: ");
    
    while((num = getchar()) != '\n'){
        switch(toupper(num)){
            case 'A': case 'C': case 'B':
            printf("2");
            break;
            case 'D': case 'E': case 'F':
            printf("3");
            break;
            case 'G': case 'H': case 'I':
            printf("4");
            break;
            case 'J': case 'K': case 'L':
            printf("5");
            break;
            case 'M': case'N': case 'O':
            printf("6");
            break;
            case 'P': case 'R': case 'S':
            printf("7");
            break;
            case 'T': case 'U': case 'V':
            printf("8");
            break;
            case 'W': case 'X': case 'Y': case 'Z':
            printf("9");
            break;
            default:
            putchar(num);
        }
    }

    return 0;
}