#include <stdio.h>
#include "sanitize.h"

int main(void)
{
    char s[200];

    printf("Tape une chaîne : ");
    fgets(s, 200, stdin);   // permet de lire les caractères non imprimables

    str_sanitize(s);

    printf("Après nettoyage : %s\n", s);

    return 0;
}
//hello world est imprimable 