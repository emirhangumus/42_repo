#include "libft.h"

void ft_putstr(const char *s)
{
    int i;

    i = 0;
    if (!s)
        return;
    while (s[i])
    {
        ft_putchar(s[i]);
        i++;
    }
}