/**
 * Date: 29-08-2021
 * by eddybruv
 * */

#include <stdio.h>
#include <ctype.h>

int main(void){
    char input;
    int i, letters_seen[26] = {0};

    printf("Enter the first word: ");
    for(i = 0; (input = tolower(getchar())) != '\n'; i++){
        if(isalpha(input))
            letters_seen[input - 'a']++;
    }

    printf("Enter second word: ");
    for(i = 0; (input = tolower(getchar())) != '\n'; i++)
        if (isalpha(input))
            letters_seen[input - 'a']--;

    for(i = 0; i < 26; i++){
        if(letters_seen[i] != 0)
            printf("Not anagrams\n");
            return 0;
    }

    printf("Words are anagrams");
    return 0;
}