/**
 * Date: 08-09-2021
 * by eddybruv
 **/

#include <stdio.h>
#include <string.h>

#define SIZE 20
#define SUB_SIZE 10

void reverse_name(char *name);
int read_line(char *name);

int main(void)
{
    char name[SIZE];
    printf("Enter your name: ");
    read_line(name);
    reverse_name(name);

    printf("Formal form: %s", name);
    return 0;
}

int read_line(char *name)
{
    int i = 0, ch;
    while ((ch = getchar()) != '\n')
        name[i++] = ch;

    name[i] = '\0';
    return i;
}

void reverse_name(char *name)
{
    char firstname[SUB_SIZE], lastname[SUB_SIZE];

    sscanf(name, "%s %s",firstname, lastname);

    sprintf(name, "%s, %c.", lastname, firstname[0]);
}

//Alternative reverse name function.
void reverse_name2(char *name)
{
    char *name_ptr = name, first_name_initial;

    while (*name == ' ')
        name_ptr++;
    first_name_initial = name_ptr++;
    while (*name_ptr && *name_ptr++ != ' ')
        ;
    while (*name_ptr && *name_ptr != '\n')
        printf("%c", *name_ptr++);

    printf(", %c.", first_name_initial);
}