/**
  * Date: 14-09-2021
  * by eddybruv
  **/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 15

bool are_anagrams(const char *word1, const char *word2);

int main(void){
    char word1[SIZE], word2[SIZE];
    printf("Enter word one: ");
    scanf("%s", word1);
    printf("Enter word two: ");
    scanf("%s", word2);

    if(are_anagrams(word1, word2))
        printf("Are anagrams.");
    else
        printf("Not anagrams.");

    return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
    int seen[26] = {0};
    int i;

    for(i = 0; word1[i] != '\0'; i++)
        if(isalpha(word1[i]))
            seen[word1[i] - 'a']++;

    for(i = 0; (word2[i]) != '\0'; i++)
        if(isalpha(word2[i]))
            seen[word2[i] - 'a']--;

    for(i = 0; i < 26; i++)
        if(seen[i] != 0)
            return false;

    return true;
}