/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolyxen <gpolyxen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:24:50 by gpolyxen          #+#    #+#             */
/*   Updated: 2022/07/07 15:24:52 by gpolyxen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*zna;
	int		i;

	i = 0;
	if (!f || !s)
		return (NULL);
	zna = malloc(ft_strlen(s) + 1);
	if (! zna)
		return (NULL);
	while (s[i] != '\0')
	{
		zna[i] = f(i, s[i]);
		i++;
	}
	zna[i] = '\0';
	return (zna);
}
