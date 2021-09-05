/**
 * Date: 04-09-2021
 * by eddybruv
 **/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

int nocase_strcmp(const char *str1, const char *str2);

int main(int argc, char *argv[]){
    char *planets[] = {"Mercury", "Venus", "Earth", 
                        "Mars", "Jupiter", "Saturn", 
                        "Uranus", "Neptune", "Pluto"};

    int i, j;

    for (i = 1; i < argc; i++){
        for (j = 0; j < NUM_PLANETS; j++)
            if ((nocase_strcmp(argv[i], planets[j])) == 0){
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }

        if (j == NUM_PLANETS)
            printf("%s is not a planet\n" ,argv[i]);
    }

    return 0;
}

int nocase_strcmp(const char *str1, const char *str2)
{
    int i;
    for(int i = 0; tolower(str1[i]) == tolower(str2[i]) && (str1[1] == str2[1]); i++){
        if(str1[i] == '\0')
            return 0;
    }
    return str1[i] - str2[i]; 
}