#include <unistd.h>

void print_address(int *n);

int main(void)
{
    int x = 42;

    print_address(&x);
    write(1, "\n", 1);
    return 0;
}
