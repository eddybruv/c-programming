/* returns the size of a string */

size_t mu_strlen (const char *s)
{
    size_t n;

    for (n = 0; *s != '\0'; s++)
        n++;
        return n;
}