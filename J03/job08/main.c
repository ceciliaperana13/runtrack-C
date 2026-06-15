#include <stdio.h>
#include "fibonacci.h"

int main(void)
{
    int n;

    printf("Entrez n : ");
    scanf("%d", &n);

    printf("fibonacci_it(%d)  = %d\n", n, fibonacci_it(n));
    printf("fibonacci_rec(%d) = %d\n", n, fibonacci_rec(n));

    return 0;
}
