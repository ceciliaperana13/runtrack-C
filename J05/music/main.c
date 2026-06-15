#include <unistd.h>
#include <string.h>
#include "album_list.h"

int main(int ac, char **av)
{
    if (ac != 3)
    {
        write(1, "Incorrect format\n", 17);
        return 1;
    }

    AlbumItem *list = NULL;

    int r = load_file(av[1], &list);
    if (r == -1)
    {
        write(1, "File not found\n", 15);
        return 1;
    }
    if (r == -2)
    {
        write(1, "Incorrect format\n", 17);
        return 1;
    }

    if (strcmp(av[2], "artist") != 0 &&
        strcmp(av[2], "title")  != 0 &&
        strcmp(av[2], "year")   != 0)
    {
        write(1, "Sort method does not exist\n", 28);
        clear_list(&list);
        return 1;
    }

    sort_album(&list, av[2]);
    print_album_list(list);
    clear_list(&list);
    return 0;
}

//gestion d’erreurs + tri + affichage
