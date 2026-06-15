#include <stdio.h>
#include <stdlib.h>

int *array_clone(int *arr, int n);

int main(void)
{
    int tab[] = {10, 20, 30, 45};
    int *copy = array_clone(tab, 5);

    for (int i = 0; i < 5; i++)
        printf("%d ", copy[i]);

    free(copy);
    return 0;
}
