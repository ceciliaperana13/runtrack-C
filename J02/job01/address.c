#include <unistd.h>

static void put_char(char c)
{
    write(1, &c, 1);
}

static void put_hex(unsigned long nb)
{
    char *base = "0123456789abcdef";

    if (nb >= 16)
        put_hex(nb / 16);
    put_char(base[nb % 16]);
}

void print_address(int *n)
{
    unsigned long addr = (unsigned long)n;

    write(1, "0x", 2);
    put_hex(addr);
}
