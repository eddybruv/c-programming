/*Date: 14-08-2021
    by eddybruv
    */

#include <stdio.h>
#include <string.h>

#define SIZE 80

int main(void){
    char input, sentence[SIZE + 1], terminal = 0, *ptr = &sentence[0];
    int last_space = SIZE + 1, j = 0, i = 0;

    printf("Enter a sentence: ");
    for(int i = 0; (input = getchar()) != '\n'; i++){
        if(input == '.' || input == '?' || input == '!'){
            last_space = i;
            terminal = input;
            break;
        }
        sentence[i] = input;
    }

    if(terminal == 0){
        printf("No terminating character detected");
        return 1;
    }

    printf("Reversal of sentence: ");
    for(i = last_space; i > 0; i--){
        if(sentence[i] == ' '){
            for (j = i + 1; j != last_space;j++){
                putchar(sentence[j]);
            }
            last_space = i;
            putchar(sentence[i]);
        }
    }
    while (sentence [i] != '\0' && sentence[i] != ' '){
        putchar(sentence[i++]);
    }
    printf("%c\n", terminal);
    return 0;
}