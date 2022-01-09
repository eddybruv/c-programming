/*Date: 09-08-2021
    by eddybruv
    */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char word[20];
    printf("Enter message: ");
    scanf("%[^\n]*%s", word);

    printf("In B1FF-speak: ");
    for(int i = 0; i < strlen(word);i++){

        if(toupper(word[i]) == 'A')
            word[i] = '4';
        if(toupper(word[i]) == 'B')
            word[i] = '8';
        if(toupper(word[i]) == 'E')
            word[i] = '3';
        if(toupper(word[i]) == 'I')
            word[i] = '1';
        if(toupper(word[i]) == 'O')
            word[i] = '0';
        if(toupper(word[i]) == 'S')
            word[i] = '5';

        printf("%c", toupper(word[i]));
    }

    printf("!!!!!!!!!!!!!!");

    return 0;
}