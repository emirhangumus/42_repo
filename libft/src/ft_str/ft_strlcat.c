#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (dest[i] && i < dstsize)
        i++;
    while (src[j] && i + j + 1 < dstsize)
    {
        dest[i + j] = src[j];
        j++;
    }
    if (i < dstsize)
        dest[i + j] = '\0';
    return (i + ft_strlen(src));
}