#ifndef ALBUM_H
#define ALBUM_H

typedef struct {
    char *title;
    char *artist;
    int year;
} Album;

void print_album(Album *album);
Album *create_album(char *artist, char *title, int year);

#endif
