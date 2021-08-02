/*Date: 02-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    char word;
    int vowel = 0;
    printf("Enter a sentence: ");
    while((word = getchar()) != '\n'){
        if(word == 'a' || word == 'e' || word == 'o' || word == 'u' || word == 'i')
        vowel += 1;
    }
    printf("The number of vowels in the sentence is %d", vowel);
}