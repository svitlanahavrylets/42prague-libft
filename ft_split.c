/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavryle <shavryle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:06:00 by shavryle          #+#    #+#             */
/*   Updated: 2025/11/18 12:23:31 by shavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

int	length_word(char const *s, char c)
{
	int	length;

	length = 0;
	while (s[length] && s[length] != c)
		length++;
	return (length);
}

static void	free_split(char **result, int j)
{
	while (j > 0)
	{
		free(result[j - 1]);
		j--;
	}
	free(result);
}

static int	copy_word(char *dst, const char *src, char c)
{
	int	k;
	int	len;

	k = 0;
	len = length_word(src, c);
	while (k < len)
	{
		dst[k] = src[k];
		k++;
	}
	dst[k] = '\0';
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	result = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		result[j] = malloc(length_word(&s[i], c) + 1);
		if (!result[j])
			return (free_split(result, j), NULL);
		i += copy_word(result[j], &s[i], c);
		j++;
	}
	result[j] = NULL;
	return (result);
}

/*int	main (void)
{
	char arr[] = "   Hello World hi  ahoj by! 1234,jk   ";
	char **result = ft_split(arr, ' ');
	for (int i = 0; result[i]; i++)
	{
		printf("%s\n", result[i]);
	}
	for (int i = 0; result[i]; i++)
    	free(result[i]);
	free(result);
	return (0);
}*/