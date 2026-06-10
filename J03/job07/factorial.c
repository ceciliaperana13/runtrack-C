#include "factorial.h"

int factorial(int n)
{
    if (n < 0)
        return 0;          // pas de factorielle négative

    if (n == 0)
        return 1;          

    return n * factorial(n - 1);   // récursion
}
