/*Date: 14-08-2021
    by eddybruv
    */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    int score[] ={1, 3, 3 ,2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    char word[10];
    int sum = 0, i, index;

    printf("Whats your word: ");
    scanf("%[^\n]*%s", word);

    printf("Your score is: ");
    for(i = 0; i < strlen(word); i++){
        if(isalpha(word[i])){
            if(isupper(word[i])){
               index = word[i] - 'A';
               sum += score[index];
            }

            else if(islower(word[i])){
                index = word[i] - 'a';
                sum += score[index];
            }
        }
    }
    printf("%d\n\n", sum);

    return 0;

}
