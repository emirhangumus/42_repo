#include "libft.h"

char *ft_strdup(const char *s)
{
    char *ptr;
    size_t len;

    len = ft_strlen(s);
    ptr = malloc(len + 1);
    if (ptr == NULL)
        return (NULL);
    ft_memcpy(ptr, s, len);
    ptr[len] = '\0';
    return (ptr);
}