/**
 * Date: 12-09-2021
 * by eddybruv
 **/

#include <stdio.h>
#include <string.h>

#define SIZE 50

double compute_average_word_length(const char *sentence);
void read_line(char *sentence);

int main(void){
    char sentence[SIZE];
    double average;
    printf("Enter a sentence: ");
    read_line(sentence);
    average = compute_average_word_length(sentence);
    printf("The average length of words is: %.2f", average);

    return 0;
}

void read_line(char *sentence)
{
    int ch, i = 0;
    while((ch = getchar()) != '\n' && i < SIZE)
        sentence[i++] = ch;

    sentence[i] = '\0';
}

double compute_average_word_length(const char *sentence)
{
    double word = 1, letters = 0;
    int i = 0;
    for(i = 0; sentence[i] != '\0'; i++){
        if(sentence[i] == ' ')
            word++;
        if(sentence[i] != ' ')
            letters += 1;
    }

    return letters/word;
}