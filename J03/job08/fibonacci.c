#include "fibonacci.h"

int fibonacci_it(int n)
{
    int a = 0;
    int b = 1;
    int temp;

    if (n < 0)
        return -1; // pas défini

    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    while (n > 1)
    {
        temp = a + b;
        a = b;
        b = temp;
        n--;
    }

    return b;
}

int fibonacci_rec(int n)
{
    if (n < 0)
        return -1; // pas défini

    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci_rec(n - 1) + fibonacci_rec(n - 2);
}
