#include <stdio.h>
#include "power.h"

int main(void)
{
    int n;
    int p;

    printf("Base : ");
    scanf("%d", &n);

    printf("Puissance : ");
    scanf("%d", &p);

    printf("%d ^ %d = %d\n", n, p, power(n, p));

    return 0;
}
//quand puissance negatif est presente elle est non gerer et donc retournera 0