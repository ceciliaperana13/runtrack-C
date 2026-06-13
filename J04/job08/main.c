#include <stdio.h>
#include <stdlib.h>
#include "album_list.h"

int main(void)
{
    AlbumItem *list = NULL;

    AlbumItem *a = create_album_item("Metallica", "Master of Puppets", 1986);
    AlbumItem *b = create_album_item("Pink Floyd", "The Wall", 1979);
    AlbumItem *c = create_album_item("Nirvana", "Nevermind", 1991);

    a->next = b;
    b->next = c;
    list = a;

    printf("Avant clear_list : %d éléments\n", count_album_item(list));

    clear_list(&list);

    printf("Après clear_list : %d éléments\n", count_album_item(list));

    return 0;
}
