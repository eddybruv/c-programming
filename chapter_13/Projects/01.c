/**
 * Date: 03-09-2021
 * by eddybruv
 **/

#include <stdio.h>
#include <string.h>

#define SIZE 10
int main(void)
{
    char str[SIZE], smallest[SIZE], largest[SIZE];
    int len;

    printf("Enter word: ");
    scanf("%s", str);

    len = strlen(str);
    strcpy(smallest, strcpy(largest, str));

    while (len != 4){
        printf("Enter word: ");
        scanf("%s", str);
        len = strlen(str);
        if(strcmp(smallest, str) > 0)
            strcpy(smallest, str);
        if(strcmp(largest, str) < 0)
            strcpy(largest, str);
    }

    printf("Smallest word: %s", smallest);
    printf("\nLargest word: %s", largest);

    return 0;
}