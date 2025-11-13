#include <libft.h>

void *ft_calloc(size_t count, size_t size)
{
    {
	unsigned char	*tmp;
	size_t			total;
	size_t			i;

	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < total)
		tmp[i++] = 0;
	return (tmp);
}
}