#include <stdio.h>
#include <stdlib.h>

void array_delete(int *arr);

int main(void)
{
    int *tab = malloc(sizeof(int) * 5);

    for (int i = 0; i < 5; i++)
        tab[i] = i * 10;

    array_delete(tab); // libère la mémoire

    return 0;
}

//la fonction array_delete() doit juste libérer la mémoire

//elle utilise free()

//elle ne doit rien afficher

//elle ne retourne rien