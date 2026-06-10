#include <unistd.h>
#include <stdlib.h>
#include "job13.h"

void putstr(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    write(1, s, i);
}

void putnbr(int n)
{
    char c;

    if (n >= 10)
        putnbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

void putfloat(double n)
{
    int entier = (int)n;
    double frac = n - entier;
    int frac100 = (int)(frac * 10); // 1 décimale

    putnbr(entier);
    write(1, ".", 1);
    putnbr(frac100);
}

int my_atoi(char *s)
{
    int n = 0;
    int i = 0;

    while (s[i] >= '0' && s[i] <= '9')
    {
        n = n * 10 + (s[i] - '0');
        i++;
    }
    return n;
}
