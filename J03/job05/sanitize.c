#include "sanitize.h"

void str_sanitize(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] < 32 || s[i] > 126)
            s[i] = '?';
        i++;
    }
}
