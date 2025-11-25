/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavryle <shavryle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 11:49:44 by shavryle          #+#    #+#             */
/*   Updated: 2025/11/18 10:48:25 by shavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	size_t	j;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_s = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!new_s)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		new_s[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < s2_len)
	{
		new_s[s1_len + j] = s2[j];
		j++;
	}
	new_s[s1_len + s2_len] = '\0';
	return (new_s);
}
