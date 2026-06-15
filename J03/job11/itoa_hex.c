#include <stdlib.h>
#include "itoa_hex.h"

char *itoa_hex(int n)
{
    int temp = n;
    int len = 1;
    char *str;
    int digit;

    // Compter le nombre de chiffres hex
    while (temp >= 16)
    {
        temp /= 16;
        len++;
    }

    // +1 pour '\0'
    str = malloc((len + 1) * sizeof(char));
    if (!str)
        return NULL;

    str[len] = '\0';

    // Remplir depuis la fin
    while (len > 0)
    {
        len--;
        digit = n % 16;

        if (digit < 10)
            str[len] = digit + '0';
        else
            str[len] = (digit - 10) + 'A'; // majuscules

        n /= 16;
    }

    return str;
}
