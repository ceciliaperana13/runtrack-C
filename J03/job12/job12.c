#include <unistd.h>
#include <stdlib.h>
#include "../job10/my_itoa.h"
#include "../job11/itoa_hex.h"
#include "../job07/factorial.h"
#include "../job08/fibonacci.h"
#include "job12.h"

void putstr(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    write(1, s, i);
}

void job12_run(int n)
{
    char *dec = my_itoa(n);
    char *hex = itoa_hex(n);

    // Décimal
    putstr("Décimal      : ");
    putstr(dec);
    putstr("\n");

    // Hexadécimal
    putstr("Hexadécimal  : ");
    putstr(hex);
    putstr("\n");

    // Factorielle si < 10
    if (n < 10)
    {
        char *fact = my_itoa(factorial(n));
        putstr("Factorielle  : ");
        putstr(fact);
        putstr("\n");
        free(fact);
    }

    // Fibonacci si < 20
    if (n < 20)
    {
        char *fib = my_itoa(fibonacci_it(n));
        putstr("Fibonacci    : ");
        putstr(fib);
        putstr("\n");
        free(fib);
    }

    free(dec);
    free(hex);
}
