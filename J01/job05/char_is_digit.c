#include <stdio.h>

int char_is_digit(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int str_is_digit(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (char_is_digit(str[i]) == 0)
            return (0);
        i++;
    }
    return (1);
}

int main()
{
    printf("\"12345\"  -> %d\n", str_is_digit("12345"));
    printf("\"0\"      -> %d\n", str_is_digit("0"));
    printf("\"123a5\"  -> %d\n", str_is_digit("123a5"));
    printf("\"hello\"  -> %d\n", str_is_digit("hello"));
    printf("\"12 34\"  -> %d\n", str_is_digit("12 34"));
    printf("\"\"       -> %d\n", str_is_digit(""));
    return (0);
}

//implémenter la fonction char_is_digit qui prend un caractère en paramètre et retourne 1 si le caractère est un chiffre et 0 sinon :int char_is_digit(char c); Fonctions autorisées : aucune