#include <stdio.h>
#include <stdlib.h>
#include "itoa_hex.h"

int main(void)
{
    int n;
    char *s;

    printf("Entrez un nombre : ");
    scanf("%d", &n);

    s = itoa_hex(n);

    if (!s)
    {
        printf("Erreur malloc\n");
        return 1;
    }

    printf("itoa_hex = %s\n", s);

    free(s);
    return 0;
}
//999 / 16 = 62 → reste 7

// / 16 = 3 → reste 14 = E

/// 16 = 0 → reste 3