#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
    size_t i;
    size_t j;

    i = 0;
    if (!*needle)
        return ((char *)haystack);
    while (haystack[i])
    {
        j = 0;
        while (haystack[i + j] == needle[j])
        {
            j++;
            if (!needle[j])
                return ((char *)haystack + i);
        }
        i++;
    }
    return (0);
}