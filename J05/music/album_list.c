#include <stdlib.h>
#include <unistd.h>
#include "album_list.h"

/* utils */
static int my_strlen(const char *s)
{
    int i = 0;
    while (s[i]) i++;
    return i;
}

static char *my_strdup(const char *s)
{
    int len = my_strlen(s);
    char *copy = malloc(len + 1);
    if (!copy) return NULL;
    for (int i = 0; i < len; i++) copy[i] = s[i];
    copy[len] = '\0';
    return copy;
}

/* create */
AlbumItem *create_album_item(char *artist, char *title, int year)
{
    AlbumItem *a = malloc(sizeof(AlbumItem));
    if (!a) return NULL;

    a->artist = my_strdup(artist);
    a->title  = my_strdup(title);
    a->year   = year;
    a->next   = NULL;
    return a;
}

/* push_back */
void push_back_album(AlbumItem **list, AlbumItem *album)
{
    if (!*list) {
        *list = album;
        return;
    }
    AlbumItem *cur = *list;
    while (cur->next) cur = cur->next;
    cur->next = album;
}

/* clear */
void clear_list(AlbumItem **list)
{
    AlbumItem *tmp;
    while (*list) {
        tmp = (*list)->next;
        free((*list)->artist);
        free((*list)->title);
        free(*list);
        *list = tmp;
    }
}

/* print */
void print_album_list(AlbumItem *list)
{
    char buffer[512];
    int len;

    while (list)
    {
        len = snprintf(buffer, sizeof(buffer),
            "\"%s\" by \"%s\" released in %d.\n",
            list->title, list->artist, list->year);

        write(1, buffer, len);
        list = list->next;
    }
}
