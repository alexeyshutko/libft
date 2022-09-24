/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolyxen <gpolyxen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:23:20 by gpolyxen          #+#    #+#             */
/*   Updated: 2022/07/07 15:23:22 by gpolyxen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, int len)
{
	int				i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)b;
	if (len == 0)
		return (b);
	else if (len > 0)
	{
		while (len > 0)
		{
			str[i] = c;
			len--;
			i++;
		}
		return (b);
	}
	else
		return (b);
}
