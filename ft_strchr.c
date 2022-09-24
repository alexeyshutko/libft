/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolyxen <gpolyxen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:24:04 by gpolyxen          #+#    #+#             */
/*   Updated: 2022/07/07 15:24:06 by gpolyxen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (c >= 0)
	{
		while (str[i] != '\0' && (unsigned char)c != str[i])
		{
			i++;
		}
		if ((unsigned char)c != str[i])
			return (NULL);
		return (&str[i]);
	}
	else
		return (NULL);
}
