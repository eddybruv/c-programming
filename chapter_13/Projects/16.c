/** 
 * Date: 11-09-2021
 * by eddybruv
 **/

#include <stdio.h>
#include <string.h>

#define SIZE 80

void reverse(char *message);

int main(void){
    char message[SIZE];
    char *p = &message[0];
    int ch;

    printf("Enter message: ");
    while((ch = getchar()) != '\n')
        *p++ = ch;

    *p = '\0';

    reverse(message);
}

void reverse(char *message)
{
    char *q = &message[strlen(message)];

    printf("\nReversal is: ");
    for (q; q >= message ;q--)
        printf("%c", *q);

    printf("\n");
}