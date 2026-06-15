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

    push_back_album(&list, create_album_item("Metallica", "Master of Puppets", 1986));
    push_back_album(&list, create_album_item("Pink Floyd", "The Wall", 1979));
    push_back_album(&list, create_album_item("Nirvana", "Nevermind", 1991));
    push_back_album(&list, create_album_item("AC/DC", "Back in Black", 1980));

    printf("Avant tri :\n");
    print_list(list);

    sort_album(&list);

    printf("\nAprès tri :\n");
    print_list(list);

    clear_list(&list);
    return 0;
}
// trie possible 