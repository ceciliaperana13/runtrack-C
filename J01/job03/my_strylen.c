#include <stdio.h>

int my_strlen(char *c)
{
    int i;

    i = 0;
    while (c[i] != '\0')
        i++;
    return (i);
}

int main()
{
    printf("\"hello\"       -> %d\n", my_strlen("hello"));
    printf("\"\"            -> %d\n", my_strlen(""));
    printf("\"Hello World\" -> %d\n", my_strlen("Hello World"));
    printf("\"42\"          -> %d\n", my_strlen("42"));
    return (0);
}