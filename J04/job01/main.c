#include <stdio.h>
#include "manhattan.h"

int main(void)
{
    Point p1 = {3, 5};
    Point p2 = {10, 1};

    int d = manhattan(p1, p2);

    printf("Distance de Manhattan = %d\n", d);
    return 0;
}
