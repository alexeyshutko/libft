/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolyxen <gpolyxen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:24:29 by gpolyxen          #+#    #+#             */
/*   Updated: 2022/07/07 15:24:31 by gpolyxen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;
	size_t	a;

	i = 0;
	l = 0;
	while (*(dst + i) != '\0' && i < dstsize)
		i++;
	a = ft_strlen(src) + i;
	if (dstsize <= i)
		return (a);
	if (src == 0 || dstsize == 0)
		return (i);
	while ((dstsize - 1) > i && src[l] != '\0')
	{
		dst[i] = src[l];
		l++;
		i++;
	}
	dst[i] = '\0';
	return (a);
}
