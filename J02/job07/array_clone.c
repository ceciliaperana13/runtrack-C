#include <stdlib.h>

int *array_clone(int *arr, int n)
{
    int *clone;
    int i = 0;

    clone = malloc(sizeof(int) * n);
    if (clone == NULL)
        return NULL;

    while (i < n)
    {
        *(clone + i) = *(arr + i);  // copie 100% pointeurs
        i++;
    }
    return clone;
}
