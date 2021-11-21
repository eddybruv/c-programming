/**
 * @brief: Write a fxn named duplicate that uses D.M.A to
 * create a copy of a string.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicate(char *);

int main(void){
    char *str = "Hi there, I'm Eddy!";
    char *str2;
    str2 = duplicate(str);

    printf("String 1: %s\n", str);
    printf("String 2: %s", str2);

    return 0;
}

char *duplicate(char *str){
    int len = strlen(str);
    char *str2;

    str2 = (char *) malloc(len + 1);
    strcpy(str2, str);

    return str2;
}