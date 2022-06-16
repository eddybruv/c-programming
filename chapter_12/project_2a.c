/**
 * Date: 31-08-2021
 * by eddybruv
 * */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define SIZE 50

bool is_palindrome(char *);
 
int main(void){
    char message[SIZE];
    printf("Enter a sentence: ");
    scanf("%[^\n]*%s", message);

    if(is_palindrome(message))
        printf("Is palindrome\n");
    else
        printf("Is not palindrome");

    return 0;
}

bool is_palindrome (char *message){
    char reverse, forward;
    int n = strlen(message);

    reverse = message[n - 1];
    forward = message[0];

    for(forward; forward != '\0'; forward++){
        if(forward == reverse)
            return true;
        else 
            return false;

        reverse--;
    }
}
