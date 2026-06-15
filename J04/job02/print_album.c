#include <unistd.h>
#include "album.h"

void print_album(Album *album)
{
    int i = 0;

    write(1, "\"", 1);
    while (album->title[i])
        write(1, &album->title[i++], 1);
    write(1, "\" by \"", 6);

    i = 0;
    while (album->artist[i])
        write(1, &album->artist[i++], 1);
    write(1, "\" released in ", 15);

    // affichage de l'année
    int year = album->year;
    char buf[10];
    int len = 0;

    if (year == 0)
        buf[len++] = '0';
    else {
        int tmp = year;
        char rev[10];
        int r = 0;

        while (tmp > 0) {
            rev[r++] = (tmp % 10) + '0';
            tmp /= 10;
        }
        while (r > 0)
            buf[len++] = rev[--r];
    }

    write(1, buf, len);
    write(1, ".\n", 2);
}
