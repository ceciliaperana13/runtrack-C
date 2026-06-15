#ifndef ALBUM_LIST_H
#define ALBUM_LIST_H

typedef struct album_item {
    char *artist;
    char *title;
    int year;
    struct album_item *next;
} AlbumItem;

AlbumItem *create_album_item(char *artist, char *title, int year);
int count_album_item(AlbumItem *list);
AlbumItem *find_album(AlbumItem *list, const char *title);
void reverse_list(AlbumItem **list);
void clear_list(AlbumItem **list);
void push_back_album(AlbumItem **list, AlbumItem *album);
void push_front_album(AlbumItem **list, AlbumItem *album);

#endif
