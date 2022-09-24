/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolyxen <gpolyxen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:23:42 by gpolyxen          #+#    #+#             */
/*   Updated: 2022/07/07 15:23:43 by gpolyxen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	vstepen(int a)
{
	int			i;
	long int	step;

	i = 0;
	step = 1;
	while (a > i)
	{
		step = 10 * step;
		i++;
	}
	return (step);
}

void	podschet(int zadan, int sum, int fd)
{
	char	nbr;
	int		i;

	i = 0;
	if (zadan == 0)
		ft_putchar_fd('0', fd);
	else
	{
		while (sum != 0)
		{
			i = (zadan / vstepen(sum - 1));
			nbr = (i % 10 + 48);
			ft_putchar_fd (nbr, fd);
			sum--;
		}
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int	i;
	int	b;

	i = n;
	b = 0;
	while (i != 0)
	{
		i = i / 10;
		b++;
	}
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd ('-', fd);
		n = -n;
	}
	if (n >= 0)
		podschet(n, b, fd);
	else
		return ;
}
