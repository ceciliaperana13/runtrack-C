#include <stdio.h>
#include "../job01/is.h"
#include "is_str.h"

int main(void)
{
    char s[100];

    printf("Tape une chaîne : ");
    scanf("%99s", s);

    printf("str_is_digit : %d\n", str_is_digit(s));
    printf("str_is_alpha : %d\n", str_is_alpha(s));
    printf("str_is_print : %d\n", str_is_print(s));

    return 0;
}
//ecrivant chaine
//str_is_digit reponse 0 “chaine” ne contient aucun chiffre
//str_is_alpha reponse 1 “chaine” est 100% alphabétique
//str_is_print reponse 1 Toutes les lettres sont imprimables