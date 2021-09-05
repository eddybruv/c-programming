/**
 * Date: 05-09-2021
 * by eddybruv
 **/

#include <stdio.h>

#define LEN 30

int compute_vowel_count(const char *sentence);

int main(void){
    char sentence[LEN];
    int vowel = 0, ch, i = 0;
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n' && i < LEN){
        sentence[i] = ch;
        i++;
    }

    i = '\0';

    vowel = compute_vowel_count (sentence);

    printf("The number of vowels in the sentence is %d", vowel);
}

int compute_vowel_count (const char *sentence)
{
    int vowel = 0;
    while (*sentence)
    {
        if(*sentence == 'a' || *sentence == 'e' || *sentence == 'o' || *sentence == 'u' || *sentence == 'i')
            vowel += 1;

        *sentence++;
    }

    return vowel;
}