/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavryle <shavryle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:48:36 by shavryle          #+#    #+#             */
/*   Updated: 2025/11/14 14:41:43 by shavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr_dst;
	const unsigned char	*ptr_src;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	ptr_dst = (unsigned char *)dst;
	ptr_src = (const unsigned char *)src;
	i = 0;
	if (ptr_dst > ptr_src)
	{
		while (n--)
			ptr_dst[n] = ptr_src[n];
	}
	else
	{
		while (i < n)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
	}
	return (dst);
}
