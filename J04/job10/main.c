#include <stdio.h>
#include <stdlib.h>
#include "album_list.h"

int main(void)
{
    AlbumItem *list = NULL;

    push_front_album(&list, create_album_item("Metallica", "Master of Puppets", 1986));
    push_front_album(&list, create_album_item("Pink Floyd", "The Wall", 1979));
    push_front_album(&list, create_album_item("Nirvana", "Nevermind", 1991));

    printf("Liste après push_front_album :\n");

    AlbumItem *tmp = list;
    while (tmp)
    {
        printf(" - %s\n", tmp->title);
        tmp = tmp->next;
    }

    clear_list(&list);
    return 0;
}
