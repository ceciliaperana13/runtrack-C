#include <stdlib.h>

char *my_strdup(char *str)
{
    int i = 0;
    char *dup;

    // calcul de la longueur
    while (str[i] != '\0')
        i++;

    // allocation (+1 pour le '\0')
    dup = malloc(sizeof(char) * (i + 1));
    if (dup == NULL)
        return NULL;

    // copie (comme my_strcpy)
    for (int j = 0; j <= i; j++)
        dup[j] = str[j];

    return dup;
}
