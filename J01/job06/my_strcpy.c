//implémenter la fonction my_strcpy qui prend en paramètres une chaîne de caractères de destination et une de source, et qui copie la source dans la destination. char *my_strcpy(char *dst, char *src); Fonctions autorisées : aucune.
#include <stdio.h>

char *my_strcpy(char *dst,char *src)
{
    int i;

    i=0;
    while (src[i] != '\0')
    {
        dst[i] = src [i];
        i++;
        
    }
    dst[i] = '\0';
    return (dst);
}
int main()
{
    char src[] = "Hello, World!";
    char dst[20];

    my_strcpy(dst, src);
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst);
    return (0);
}