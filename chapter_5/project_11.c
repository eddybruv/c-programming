/*Date: 26-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int num, reverse;
    printf("Enter a two digit number: ");
    scanf("%d", &num);

    reverse = num % 10;
    num = num / 10;

    printf("You entered the number ");
    if(num > 1){
        switch (num)
        {
        case 2:
            printf("Twenty-");
            break;
        case 3:
            printf("Thirty-");
            break;
        case 4:
            printf("Fourty-");
            break;
        case 5:
            printf("Fifty-");
            break;
        case 6:
            printf("Sixty-");
            break;
        case 7:
            printf("Seventy-");
            break;
        case 8:
            printf("Eighty-");
            break;
        case 9:
            printf("Ninty-");
            break;                    
        }

        switch (reverse){
            case 1:
                printf("One");
                break;
            case 2:
                printf("two");
                break;
            case 3:
                printf("three");
                break;
            case 4:
                printf("four");
                break;
            case 5:
                printf("five");
                break;
            case 6:
                printf("six");
                break;
            case 7:
                printf("seven");
                break;
            case 8:
                printf("eight");
                break;
            case 9:
                printf("nine");
                break;                            
        }
    }
    else{
        switch(reverse){
            case 0:
                printf("Ten");
                break;
            case 1:
                printf("Eleven");
                break;
            case 2:
                printf("Twelve");
                break;
            case 3:
                printf("Thirteen");
                break;
            case 4:
                printf("fourteen");
                break;
            case 5:
                printf("fifteen");
                break;
            case 6:
                printf("sixteen");
                break;
            case 7:
                printf("seventeen");
                break;
            case 8:
                printf("eighteen");
                break;
            case 9:
                printf("nineteen");
                break; 
        }
    }
}