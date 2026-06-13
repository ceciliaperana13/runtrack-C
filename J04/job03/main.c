#include <stdlib.h>
#include "album.h"

int main(void)
{
    Album *a = create_album("Metallica", "Master of Puppets", 1986);

    print_album(a);

    // libération mémoire
    free(a->artist);
    free(a->title);
    free(a);

    return 0;
}
