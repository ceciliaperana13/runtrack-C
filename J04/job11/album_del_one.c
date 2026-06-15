#include <stdlib.h>
#include "album_list.h"

void album_del_one(AlbumItem **list, AlbumItem *elem)
{
    AlbumItem *cur;
    AlbumItem *prev;

    if (!list || !*list || !elem)
        return;

    /* Cas 1 : l'élément à supprimer est la tête */
    if (*list == elem)
    {
        *list = elem->next;
        free(elem->artist);
        free(elem->title);
        free(elem);
        return;
    }

    /* Cas 2 : l'élément est ailleurs dans la liste */
    prev = *list;
    cur = (*list)->next;

    while (cur)
    {
        if (cur == elem)
        {
            prev->next = cur->next;
            free(cur->artist);
            free(cur->title);
            free(cur);
            return;
        }
        prev = cur;
        cur = cur->next;
    }
}
