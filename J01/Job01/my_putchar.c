//implémenter la fonction my_putchar quiprend un caractère en paramètre et l’écrit sur la sortie standard :int my_putchar(char c); Fonctions autorisées : write()
#include <unistd.h>

int my_putchar(char c)
{
     write(1, &c, 1);
     return (0);
}
int main()
{
    my_putchar('H');
    my_putchar('e');
    my_putchar('l');
    my_putchar('l');
    my_putchar('o');
    my_putchar('\n');
    return (0);
}