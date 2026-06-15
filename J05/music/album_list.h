#ifndef ALBUM_LIST_H
#define ALBUM_LIST_H

typedef struct album_item {
    char *artist;
    char *title;
    int year;
    struct album_item *next;
} AlbumItem;

/* functions reused */
AlbumItem *create_album_item(char *artist, char *title, int year);
void push_back_album(AlbumItem **list, AlbumItem *album);
void clear_list(AlbumItem **list);

/* Sorting */
void sort_album(AlbumItem **list, const char *method);

/* Parsing */
int load_file(const char *filename, AlbumItem **list);

/* Display */
void print_album_list(AlbumItem *list);

#endif
//structure + prototypes