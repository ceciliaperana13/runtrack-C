#include <stdlib.h>
#include "album.h"

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

Album *create_album(char *artist, char *title, int year)
{
    Album *a = malloc(sizeof(Album));
    if (!a)
        return NULL;

    a->artist = my_strdup(artist);
    a->title  = my_strdup(title);
    a->year   = year;

    return a;
}
