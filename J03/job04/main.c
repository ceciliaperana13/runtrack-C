#include <stdio.h>
#include "is_str2.h"   // str_to_lower, str_to_upper, str_switch_case

int main(void)
{
    char s[200];

    printf("Tape une chaîne : ");
    fgets(s, 200, stdin);

    printf("\n--- Tests ---\n");

    str_to_lower(s);
    printf("En minuscules : %s", s);

    str_to_upper(s);
    printf("En majuscules : %s", s);

    str_switch_case(s);
    printf("Switch case   : %s", s);

    return 0;
}
