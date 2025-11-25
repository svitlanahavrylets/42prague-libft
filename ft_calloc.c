/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavryle <shavryle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 08:57:51 by shavryle          #+#    #+#             */
/*   Updated: 2025/11/17 19:26:29 by shavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			total;
	size_t			i;

	total = count * size;
	tmp = malloc(total);
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < total)
		tmp[i++] = 0;
	return (tmp);
}
