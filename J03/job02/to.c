#include "to.h"

char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c + ('a' - 'A');  // +32
    return c;
}

char to_upper(char c)
{
    if (c >= 'a' && c <= 'z')
        return c - ('a' - 'A');  // -32
    return c;
}

char switch_case(char c)
{
    if (c >= 'a' && c <= 'z')
        return to_upper(c);
    if (c >= 'A' && c <= 'Z')
        return to_lower(c);
    return c;
}


//to_lower : transforme une majuscule en minuscule

//to_upper : transforme une minuscule en majuscule

//switch_case : inverse la casse en utilisant les deux autres