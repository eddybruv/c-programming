/*Date: 14-08-2021
    by eddybruv
    */

#include <stdio.h>
#include <string.h>

int main(void){
    char first[10];
    char last[10];
    char initial;

    printf("Enter a first and last name: ");
    scanf("%s", first);
    scanf("%s", last);

    printf("You entered the name: %s, ", last);
    for(int i = 0; i < 1; i++)
        printf("%c.", first[i]);
    
    return 0;
}