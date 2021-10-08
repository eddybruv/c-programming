/**
 * *p = *s2
 * This expression copies a character form wher s2
 * points to where p points.
 * After the assignment, both p and s2 are incremented,
 * thanks to the ++ operators.
 * Repeatedly executing this expression has the effect of copying 
 * a series of characters from where s2 points to where p points
 **/

char *my_strcat(char *s1, const char *s2)
{
    char *p = s1;

    while (*p)
        p++;
    while (*p++ = *s2++)
        ;
    return s1;
}