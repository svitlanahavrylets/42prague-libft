/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavryle <shavryle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:36:20 by shavryle          #+#    #+#             */
/*   Updated: 2025/11/18 12:25:08 by shavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd((nb % 10) + '0', fd);
}

/*int	main(void)
{
	ft_putnbr_fd(0, 1);
	write(1, "\n", 1);

	ft_putnbr_fd(123, 1);
	write(1, "\n", 1);

	ft_putnbr_fd(-123, 1);
	write(1, "\n", 1);

	ft_putnbr_fd(INT_MAX, 1);
	write(1, "\n", 1);

	ft_putnbr_fd(INT_MIN, 1);
	write(1, "\n", 1);

	return (0);
}*/