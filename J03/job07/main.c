#include <stdio.h>
#include "factorial.h"

int main(void)
{
    int n;

    printf("Entrez un nombre : ");
    scanf("%d", &n);

    printf("factorial(%d) = %d\n", n, factorial(n));

    return 0;
}
//Un int fait 32 bits

// peut stocker au maximum environ 2 milliards  
//2147 483 647 exactement)
//donc 189 est =0
