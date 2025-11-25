/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavryle <shavryle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:48:30 by shavryle          #+#    #+#             */
/*   Updated: 2025/11/17 18:58:50 by shavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	if (dst == 0 && src == 0)
		return (dst);
	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	while (n > 0)
	{
		*ptr_dst = *ptr_src;
		ptr_dst++;
		ptr_src++;
		n--;
	}
	return (dst);
}
