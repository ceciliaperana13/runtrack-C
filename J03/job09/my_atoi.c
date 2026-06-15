#include "my_atoi.h"

int my_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    // Ignorer les espaces
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;

    // Gérer le signe
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
    {
        i++;
    }

    // Lire les chiffres
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result * sign;
}
