#include "libft.h"

static size_t	count_digits(long nb)
{
	size_t	count;

	count = 0;
	while (nb > 0)
	{
		count++;
		nb /= 10;
	}
	return (count);
}

static char *itoa_zero(void)
{
    char *str;

    str = malloc(2); 
    if (!str)
        return (NULL);
    str[0] = '0';
    str[1] = '\0';
    return (str); 
}

static long  handle_negative(long nb, int *is_negative)
{
    if (nb < 0)
    {
        nb = -nb;
        *is_negative = 1;
    }
    return (nb);
}
char *ft_itoa(int n)
{
    long    nb;
    size_t  digit_count;
    int     is_negative;
    char    *str;

    is_negative = 0;
    nb = n;
    if (n == 0)
        return (itoa_zero());
    nb = handle_negative(nb, &is_negative);
    digit_count = count_digits(nb) + is_negative;
    str = malloc(digit_count + 1);
    if (!str)
        return (NULL);
    str[digit_count] = '\0';
    digit_count--;
    while (nb > 0)
    {
        str[digit_count] = '0' + (nb % 10);
        digit_count--;
        nb /= 10;
    }
    if (is_negative)
        str[0] = '-';
    return (str);
}