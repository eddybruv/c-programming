/*Date: 31-08-2021
    by eddybruv
    */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define SIZE 50
bool is_palindrome(char *, int size);

int main(void){
    char message[SIZE];
    int ch, i = 0;
    printf("Enter the sentence: ");

    while((ch = getchar())!= '\n' && i < SIZE){
        *(message + i) = tolower(ch);
        i++;
    }
    i--;

    if(is_palindrome(message, i))
        printf("Is palindrome\n");
    else
        printf("Not palindrome");

    return 0;
}

bool is_palindrome(char* message, int i)
{
    int j = 0, len = i;

    while (j < len){
        if(*(message + j) == *(message + len)){
            len--;
            j++;
            return true;
        }
        else 
            return false;
    }
}