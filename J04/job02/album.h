#ifndef ALBUM_H
#define ALBUM_H

typedef struct {
    char *title;
    char *artist;
    int year;
} Album;

#define ABS(x) ((x) < 0 ? -(x) : (x))

void print_album(Album *album);

#endif
