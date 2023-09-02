#include "libft.h"

void ft_putnstr(char const *s, int a)
{
    int i;

    i = 0;
    if (!s)
        return;
    while (i < a)
    {
        ft_putchar(s[i]);
        i++;
    }
}