#include <stdio.h>
#include "to.h"

int main(void)
{
    char c;

    printf("Tape un caractère : ");
    scanf("%c", &c);

    printf("to_lower     : %c\n", to_lower(c));
    printf("to_upper     : %c\n", to_upper(c));
    printf("switch_case  : %c\n", switch_case(c));

    return 0;
}
