#include <unistd.h>
#include "job12.h"

int main(int argc, char **argv)
{
    int n = 0;
    int i = 0;

    if (argc != 2)
    {
        write(1, "Usage: ./job12 <nombre>\n", 25);
        return 1;
    }

    // atoi maison
    while (argv[1][i] >= '0' && argv[1][i] <= '9')
    {
        n = n * 10 + (argv[1][i] - '0');
        i++;
    }

    job12_run(n);
    return 0;
}
