#include <stdlib.h>
#include "my_itoa.h"

char *my_itoa(int n)
{
    int temp = n;
    int len = 1;
    char *str;

    // Compter le nombre de chiffres
    while (temp >= 10)
    {
        temp /= 10;
        len++;
    }

    // +1 pour '\0'
    str = malloc((len + 1) * sizeof(char));
    if (!str)
        return NULL;

    str[len] = '\0';

    // Remplir la string depuis la fin
    while (len > 0)
    {
        len--;
        str[len] = (n % 10) + '0';
        n /= 10;
    }

    return str;
}
