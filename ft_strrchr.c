/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolyxen <gpolyxen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:25:11 by gpolyxen          #+#    #+#             */
/*   Updated: 2022/07/07 15:25:13 by gpolyxen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (c >= 0 && (unsigned char)c <= 127)
	{
		while (str[i] != '\0')
			i++;
		while (str[i] != (unsigned char)c && i != 0)
			i--;
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		else
			return (0);
	}
	else
		return (0);
}
