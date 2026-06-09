// malloc 
#include <stdlib.h>

int *int_dup(int value)
{
    int *ptr;

    ptr = malloc(sizeof(int));
    if (ptr == NULL)
        return NULL;

    *ptr = value;
    return ptr;
}
