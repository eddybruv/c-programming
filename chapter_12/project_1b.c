/*Date: 21-08-2021
    by eddybruv
    */

#include <stdio.h>
#include <string.h>

#define SIZE 50
int main(void){
    char message[SIZE];
    printf("Enter a message: ");

    int ch;
    char *p = &message[0];
    while ((ch = getchar())  != '\n')
        *(p++) = ch;
    
    *p = '\0';

    int n = strlen(message);
    
    printf("Reversal is: ");
    
    //Since *p points to a null character, we initialise the loop too p--

    for(p--; p >= message; p--)
        printf("%c", *p);

    return 0;
}