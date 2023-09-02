#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t size)
{
    while (*s1 && *s2 && *s1 == *s2 && size > 0)
    {
        s1++;
        s2++;
        size--;
    }
    if (size == 0)
        return (0);
    return ((unsigned char)*s1 - (unsigned char)*s2);
}