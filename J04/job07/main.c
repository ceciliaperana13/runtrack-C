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

    printf("Avant inversion :\n");
    AlbumItem *tmp = list;
    while (tmp)
    {
        printf(" - %s\n", tmp->title);
        tmp = tmp->next;
    }

    reverse_list(&list);

    printf("\nAprès inversion :\n");
    tmp = list;
    while (tmp)
    {
        printf(" - %s\n", tmp->title);
        tmp = tmp->next;
    }

    // libération mémoire
    free(a->artist); free(a->title);
    free(b->artist); free(b->title);
    free(c->artist); free(c->title);
    free(a); free(b); free(c);

    return 0;
}
