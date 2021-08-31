/**
 * Date: 31-08-2021
 * by eddybruv
 * */

#include <stdio.h>

#define SIZE 50

void reverse(char *);

int main(void){
    char message[SIZE];

    printf("Enter a message: ");
    reverse(message);

    return 0;
}

void reverse(char *message){
    int i = 0;
    char ch;
    while((ch = getchar()) != '\n' && i < SIZE){
        *(message + i) = ch;
        i++;
    }
    printf("The reverse is: ");
    while (i >= 0){
        printf("%c", *(message + i));
        --i;
    }

    printf("\n");
}