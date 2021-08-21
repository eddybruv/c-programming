/*Date: 21-08-2021
    by eddybruv
    */

#include <stdio.h>
#include <string.h>

#define SIZE 50
int main(void){
    char message[SIZE];
    printf("Enter a message: ");

    int ch, i = 0;
    while ((ch = getchar())  != '\n')
        message[i++] = ch;
    
    message[i] = '\0';

    int n = strlen(message);
    
    printf("Reversal is: ");
    for(i = n - 1; i >= 0; i--)
        printf("%c", message[i]);

    return 0;
}