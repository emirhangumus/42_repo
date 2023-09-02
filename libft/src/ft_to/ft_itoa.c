#include "libft.h"

static int ft_intlen(int n)
{
    int len;

    len = 1;
    while (n /= 10)
        len++;
    return (len);
}

static int ft_abs(int n)
{
    if (n < 0)
        return (-n);
    return (n);
}

char *ft_itoa(int n)
{
    char *str;
    int len;
    int sign;

    len = ft_intlen(n);
    sign = 1;
    if (n < 0)
    {
        sign = -1;
        len++;
    }
    if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    str[len] = '\0';
    while (len--)
    {
        str[len] = ft_abs(n % 10) + '0';
        n /= 10;
    }
    if (sign == -1)
        str[0] = '-';
    return (str);
}