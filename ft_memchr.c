/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolyxen <gpolyxen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:22:50 by gpolyxen          #+#    #+#             */
/*   Updated: 2022/07/07 15:22:53 by gpolyxen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str1;

	i = 0;
	str1 = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str1[i] == (unsigned char)c)
			return (str1 + i);
		i++;
	}
	return (NULL);
}
