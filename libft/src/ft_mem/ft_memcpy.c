#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *ptr_dst;
    unsigned char *ptr_src;

    ptr_dst = (unsigned char *)dest;
    ptr_src = (unsigned char *)src;
    while (n--)
        *ptr_dst++ = *ptr_src++;
    return (dest);
}