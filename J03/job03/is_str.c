#include "../job01/is.h"      // pour is_digit, is_alpha, is_print
#include "is_str.h"  

int str_is_digit(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if (!is_digit(s[i]))
            return 0;
        i++;
    }
    return 1;
}

int str_is_alpha(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if (!is_alpha(s[i]))
            return 0;
        i++;
    }
    return 1;
}

int str_is_print(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if (!is_print(s[i]))
            return 0;
        i++;
    }
    return 1;
}
