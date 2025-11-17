#include "libft.h"

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    size_t  len;
    char    *new;
    size_t  i;

    len = 0;
    if (!s || !f)
        return (NULL);
    len = ft_strlen(s);
    new = malloc(len + 1);
    if (!new)
        return (NULL);
    i = 0;
    while (i < len)
    {
        new[i] = f(i, s[i]);
        i++;
    }
    new[i] = '\0';
    return new;
}