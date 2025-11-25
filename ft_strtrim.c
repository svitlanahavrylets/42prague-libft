/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavryle <shavryle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:06:03 by shavryle          #+#    #+#             */
/*   Updated: 2025/11/18 12:26:29 by shavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	length;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	if (end == 0)
		return (ft_strdup(""));
	end--;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	if (start > end)
		return (ft_strdup(""));
	length = end - start + 1;
	return (ft_substr(s1, start, length));
}
