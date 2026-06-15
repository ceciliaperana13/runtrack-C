#ifndef ALBUM_LIST_H
#define ALBUM_LIST_H

typedef struct album_item {
    char *artist;
    char *title;
    int year;
    struct album_item *next;
} AlbumItem;

AlbumItem *create_album_item(char *artist, char *title, int year);

#endif
