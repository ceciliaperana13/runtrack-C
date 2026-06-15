#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "album_list.h"

static int my_atoi(const char *s)
{
    int n = 0;
    for (int i = 0; s[i]; i++)
        n = n * 10 + (s[i] - '0');
    return n;
}

int load_file(const char *filename, AlbumItem **list)
{
    int fd = open(filename, O_RDONLY);
    if (fd < 0)
        return -1; // File not found

    char buf[4096];
    int r = read(fd, buf, sizeof(buf) - 1);
    close(fd);

    if (r <= 0)
        return -2; // Incorrect format

    buf[r] = '\0';

    char *line = buf;
    char *end;

    while ((end = strchr(line, '\n')))
    {
        *end = '\0';

        char *artist = line;
        char *title  = strchr(line, ',');
        if (!title) return -2;
        *title++ = '\0';

        char *year = strchr(title, ',');
        if (!year) return -2;
        *year++ = '\0';

        push_back_album(list, create_album_item(artist, title, my_atoi(year)));

        line = end + 1;
    }

    return 0;
}
//lecture du fichier avec open/read