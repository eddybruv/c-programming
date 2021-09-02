/* Function to read strings */

#include <stdio.h>

int read_line(char str[], int n)
{
    int ch, i = 0;

    while((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;

    str[i] = '\0';      /* terminates string */
    return i;           /* number of characters stored */
}
