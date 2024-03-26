#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char     *sub;
    size_t    i;

    i = 0;
    sub = (char *)malloc((len + 1) * sizeof(char));
    if (len == 0 || *s == 0x00)
        return (0);
    while (*s && i < len)
    {
        sub[i++] = s[start++];
        if (start >= strlen((char *)s))
            return (0);
    }
    //printf("\n\ti: %ld\n", i);
    sub[i] = 0x00;
    return (sub);
}

int    main()
{
    char s[] = "Create substring from this string";
    size_t start = 7;
    size_t len = 9;
    char *sub = ft_substr(s, start, len);
    printf("\tsubstring:%s\n", sub);
    free (sub);
}