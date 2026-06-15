#include <stdlib.h>
#include "album_list.h"

void album_del_one(AlbumItem **list, AlbumItem *elem)
{
    AlbumItem *cur;
    AlbumItem *prev;

    if (!list || !*list || !elem)
        return;

    if (*list == elem)
    {
        *list = elem->next;
        free(elem->artist);
        free(elem->title);
        free(elem);
        return;
    }

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
