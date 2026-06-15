//implémenter la fonction increment qui incrémenter la valeur pointée : void increment(int *n);Fonctions utilisées : aucune.
#include <stdio.h>

void increment(int *n)
{
    (*n)++;
}

int main()
{
    int x = 5;

    printf("Before increment: %d\n", x);
    increment(&x);
    printf("After increment: %d\n", x);
    return (0);
}
