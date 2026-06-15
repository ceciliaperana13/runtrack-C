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

    AlbumItem *found = find_album(list, "The Wall");

    if (found)
        printf("Trouvé : %s (%d)\n", found->title, found->year);
    else
        printf("Album non trouvé.\n");

    /* libération mémoire */
    free(a->artist); free(a->title);
    free(b->artist); free(b->title);
    free(c->artist); free(c->title);
    free(a); free(b); free(c);

    return 0;
}
