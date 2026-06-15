#include <stdio.h>

int char_is_digit(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int main()
{
    printf("'5'  -> %d\n", char_is_digit('5'));
    printf("'0'  -> %d\n", char_is_digit('0'));
    printf("'9'  -> %d\n", char_is_digit('9'));
    printf("'a'  -> %d\n", char_is_digit('a'));
    printf("' '  -> %d\n", char_is_digit(' '));
    printf("'!'  -> %d\n", char_is_digit('!'));
    return (0);
}