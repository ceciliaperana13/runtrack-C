#include <stdio.h>
#include <stdlib.h>

char *my_strdup(char *str);

int main(void)
{
    char *s = my_strdup("au revoir!!");
    printf("%s\n", s);
    free(s);
    return 0;
}
