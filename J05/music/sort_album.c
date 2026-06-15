#include "album_list.h"

static int my_strcmp(const char *a, const char *b)
{
    int i = 0;
    while (a[i] && b[i] && a[i] == b[i]) i++;
    return (unsigned char)a[i] - (unsigned char)b[i];
}

static int compare(AlbumItem *a, AlbumItem *b, const char *method)
{
    if (!method) return 0;

    if (my_strcmp(method, "artist") == 0)
        return my_strcmp(a->artist, b->artist);

    if (my_strcmp(method, "title") == 0)
        return my_strcmp(a->title, b->title);

    if (my_strcmp(method, "year") == 0)
        return a->year - b->year;

    return 999999; // invalid
}

void sort_album(AlbumItem **list, const char *method)
{
    if (!list || !*list) return;

    int swapped = 1;
    AlbumItem *cur;

    while (swapped)
    {
        swapped = 0;
        cur = *list;

        while (cur->next)
        {
            if (compare(cur, cur->next, method) > 0)
            {
                char *a = cur->artist;
                char *t = cur->title;
                int y   = cur->year;

                cur->artist = cur->next->artist;
                cur->title  = cur->next->title;
                cur->year   = cur->next->year;

                cur->next->artist = a;
                cur->next->title  = t;
                cur->next->year   = y;

                swapped = 1;
            }
            cur = cur->next;
        }
    }
}
