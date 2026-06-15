#include "album.h"

int main(void)
{
    Album a;

    a.title = "Master of Puppets";
    a.artist = "Metallica";
    a.year = 1986;

    print_album(&a);

    return 0;
}
