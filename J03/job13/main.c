#include <stdlib.h>
#include <unistd.h>
#include "job13.h"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        write(1, "Usage: ./job13 <n1> <n2> ...\n", 30);
        return 1;
    }

    int count = argc - 1;
    int *tab = malloc(sizeof(int) * count);
    if (!tab)
        return 1;

    int sum = 0;

    for (int i = 0; i < count; i++)
    {
        tab[i] = my_atoi(argv[i + 1]);
        sum += tab[i];
    }

    // Affichage somme
    putnbr(sum);
    write(1, "\n", 1);

    // Affichage moyenne
    double avg = (double)sum / count;
    putfloat(avg);
    write(1, "\n", 1);

    free(tab);
    return 0;
}
//./job13 123 456 7 8 9
