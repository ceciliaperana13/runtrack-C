#include <stdio.h>
#include <stdlib.h>
#include "my_itoa.h"

int main(void)
{
    int n;
    char *s;

    printf("Entrez un nombre : ");
    scanf("%d", &n);

    s = my_itoa(n);

    if (s == NULL)
    {
        printf("Erreur malloc\n");
        return 1;
    }

    printf("my_itoa = %s\n", s);

    free(s);
    return 0;
}
