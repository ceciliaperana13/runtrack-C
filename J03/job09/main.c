#include <stdio.h>
#include "my_atoi.h"

int main(void)
{
    char s[100];

    printf("Entrez une chaîne : ");
    fgets(s, 100, stdin);

    printf("my_atoi = %d\n", my_atoi(s));

    return 0;
}
