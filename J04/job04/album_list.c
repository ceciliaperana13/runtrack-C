#include <stdlib.h>
#include "album_list.h"

static int my_strlen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return i;
}

static char *my_strdup(char *s)
{
    int len = my_strlen(s);
    char *copy = malloc(len + 1);
    if (!copy)
        return NULL;

    for (int i = 0; i < len; i++)
        copy[i] = s[i];
    copy[len] = '\0';

    return copy;
}

AlbumItem *create_album_item(char *artist, char *title, int year)
{
    AlbumItem *item = malloc(sizeof(AlbumItem));
    if (!item)
        return NULL;

    item->artist = my_strdup(artist);
    item->title  = my_strdup(title);
    item->year   = year;
    item->next   = NULL;

    return item;
}
