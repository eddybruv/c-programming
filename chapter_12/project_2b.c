/*Date: 31-08-2021
    by eddybruv
    */

#include <stdio.h>
#include <stdbool.h>

#define SIZE 50
bool is_palindrome(char *);

int main(void){
    char message[SIZE];
    printf("Enter the word: ");
    scanf("%s", message);

    if(is_palindrome(message))
        printf("Is palindrome\n");
    else
        printf("Not palindrome");

    return 0;
}

bool is_palindrome(char* message)
{
    char *ptr, *rev;

    ptr = message;

    while (*ptr != '\0'){
        ptr++;
    }
    ptr--;

    for(rev = message; ptr >= rev; ){
        if(*ptr == *rev){
            --ptr;
            rev++;
            return true;
        }
        else 
            return false;
    }
}