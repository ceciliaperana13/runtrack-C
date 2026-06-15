#include <stdio.h>
#include "is.h"

int main(void)
{
    char c;

    printf("Tape un caractère : ");
    scanf("%c", &c);

    printf("is_digit : %d\n", is_digit(c));
    printf("is_lower : %d\n", is_lower(c));
    printf("is_upper : %d\n", is_upper(c));
    printf("is_alpha : %d\n", is_alpha(c));
    printf("is_print : %d\n", is_print(c));

    return 0;
}
