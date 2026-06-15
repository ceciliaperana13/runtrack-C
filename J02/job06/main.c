#include <stdio.h>

void divide(int *val);

int main(void)
{
    int x = 20;

    divide(&x);
    printf("%d\n", x); // affiche 10

    return 0;
}
