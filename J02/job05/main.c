#include <stdio.h>
#include <stdlib.h>   // obligatoire pour free()

int *int_dup(int value);

int main()
{
    int *p = int_dup(42);

    if (p != NULL)
    {
        printf("Value = %d\n", *p);
        free(p);   
    }
    return 0;
}
