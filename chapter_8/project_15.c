/*Date:14-08-2021
    by eddybruv
    */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
    char word[80];
    char cipher[80];
    int key;

    printf("\nEnter message to be encrpyted: ");
    scanf("%[^\n]*%s", word);

    printf("Enter shift amount(1 - 25): ");
    scanf("%d", &key);

    printf("Encrpyted message: ");
    for(int i = 0; i <= strlen(word); i++){
        if(isalpha(word[i])){
            if (isupper(word[i])){
                word[i] = ((word[i] - 'A') + key) % 26 + 'A';
            }
            else
                word[i] = ((word[i] - 'a') + key) % 26 + 'a';
        }

        printf("%c", word[i]);
    }

    printf("\n\n");
    return 0;
}