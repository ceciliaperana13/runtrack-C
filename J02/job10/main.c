#include <stdio.h>

int *sort_int(int *array);

int main(void)
{
    int tab[] = {45, 10, 30, 20, 0};

    sort_int(tab);

    for (int i = 0; tab[i] != 0; i++)
        printf("%d ", tab[i]);

    return 0;
}
