#include <stdlib.h>
#include "album_list.h"

static int my_strlen(const char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return i;
}

static char *my_strdup(const char *s)
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

int count_album_item(AlbumItem *list)
{
    int count = 0;

    while (list)
    {
        count++;
        list = list->next;
    }
    return count;
}


AlbumItem *find_album(AlbumItem *list, const char *title)
{
    int i;

    while (list)
    {
        i = 0;
        while (list->title[i] && title[i] && list->title[i] == title[i])
            i++;

        if (list->title[i] == '\0' && title[i] == '\0')
            return list;

        list = list->next;
    }
    return NULL;
}

void reverse_list(AlbumItem **list)
{
    AlbumItem *prev = NULL;
    AlbumItem *cur = *list;
    AlbumItem *next;

    while (cur)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    *list = prev;
}


void clear_list(AlbumItem **list)
{
    AlbumItem *tmp;

    while (*list)
    {
        tmp = (*list)->next;

        free((*list)->artist);
        free((*list)->title);
        free(*list);

        *list = tmp;
    }
}

void push_back_album(AlbumItem **list, AlbumItem *album)
{
    if (*list == NULL)
    {
        *list = album;
        return;
    }

    AlbumItem *cur = *list;
    while (cur->next)
        cur = cur->next;

    cur->next = album;
}
//rajout pour le job 10
void push_front_album(AlbumItem **list, AlbumItem *album)
{
    album->next = *list;
    *list = album;
}
