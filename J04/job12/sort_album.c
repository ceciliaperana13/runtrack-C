#include "album_list.h"

static int my_strcmp(const char *a, const char *b)
{
    int i = 0;
    while (a[i] && b[i] && a[i] == b[i])
        i++;
    return (unsigned char)a[i] - (unsigned char)b[i];
}

void sort_album(AlbumItem **list)
{
    if (!list || !*list)
        return;

    int swapped = 1;
    AlbumItem *cur;
    AlbumItem *next;

    while (swapped)
    {
        swapped = 0;
        cur = *list;

        while (cur->next)
        {
            next = cur->next;

            if (my_strcmp(cur->title, next->title) > 0)
            {
                char *tmp_artist = cur->artist;
                char *tmp_title  = cur->title;
                int tmp_year     = cur->year;

                cur->artist = next->artist;
                cur->title  = next->title;
                cur->year   = next->year;

                next->artist = tmp_artist;
                next->title  = tmp_title;
                next->year   = tmp_year;

                swapped = 1;
            }
            cur = cur->next;
        }
    }
}
