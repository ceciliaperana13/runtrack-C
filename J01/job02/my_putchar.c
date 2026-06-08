#include <unistd.h>

int my_putchar(char c)
{
    return write(1, &c, 1);
}

int my_putstr(char *c)
{
    int i = 0;

    while (c[i] != '\0')
    {
        my_putchar(c[i]);
        i++;
    }
    return i;
}
int my_putchar(char c);
int my_putstr(char *c);

int main(void)
{
    my_putchar('A');
    my_putchar('\n');

    my_putstr("Bonjour");
    my_putchar('\n');

    return 0;
}