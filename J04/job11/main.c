#include <stdio.h>
#include <stdlib.h>
#include "album_list.h"

void print_list(AlbumItem *list)
{
    while (list)
    {
        printf(" - %s\n", list->title);
        list = list->next;
    }
}

int main(void)
{
    AlbumItem *list = NULL;

    AlbumItem *a = create_album_item("Metallica", "Master of Puppets", 1986);
    AlbumItem *b = create_album_item("Pink Floyd", "The Wall", 1979);
    AlbumItem *c = create_album_item("Nirvana", "Nevermind", 1991);

    a->next = b;
    b->next = c;
    list = a;

    printf("Avant suppression :\n");
    print_list(list);

    album_del_one(&list, b);

    printf("\nAprès suppression de \"The Wall\" :\n");
    print_list(list);

    clear_list(&list);
    return 0;
}
