#include <stdio.h>
#include <stdlib.h>
#include "album_list.h"

int main(void)
{
    AlbumItem *a = create_album_item("Metallica", "Master of Puppets", 1986);

    printf("Album: %s - %s (%d)\n", a->artist, a->title, a->year);

    // libération mémoire
    free(a->artist);
    free(a->title);
    free(a);

    return 0;
}
