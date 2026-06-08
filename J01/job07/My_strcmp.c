#include <stdio.h>

int my_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}

int main()
{
    printf("\"abc\" vs \"abc\"  -> %d\n", my_strcmp("abc", "abc"));
    printf("\"abc\" vs \"abd\"  -> %d\n", my_strcmp("abc", "abd"));
    printf("\"abd\" vs \"abc\"  -> %d\n", my_strcmp("abd", "abc"));
    printf("\"abc\" vs \"abcd\" -> %d\n", my_strcmp("abc", "abcd"));
    printf("\"abcd\" vs \"abc\" -> %d\n", my_strcmp("abcd", "abc"));
    printf("\"\" vs \"\"        -> %d\n", my_strcmp("", ""));
    printf("\"a\" vs \"b\"      -> %d\n", my_strcmp("a", "b"));
    return (0);
}