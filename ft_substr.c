/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavryle <shavryle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:53:52 by shavryle          #+#    #+#             */
/*   Updated: 2025/11/18 09:44:53 by shavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	max_possible;
	size_t	real_len;
	size_t	i;

	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	max_possible = s_len - start;
	if (len > max_possible)
		real_len = max_possible;
	else
		real_len = len;
	substr = malloc(real_len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < real_len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[real_len] = '\0';
	return (substr);
}
