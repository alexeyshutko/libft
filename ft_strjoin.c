/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolyxen <gpolyxen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:24:23 by gpolyxen          #+#    #+#             */
/*   Updated: 2022/07/07 15:24:25 by gpolyxen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		i;
	int		a;

	i = -1;
	a = 0;
	if (!(s1 && s2))
		return (NULL);
	newstr = (char *)malloc (sizeof(char) * (ft_strlen(s1)
				+ ft_strlen(s2) + 1));
	if (newstr == NULL)
		return (NULL);
	while (s1[++i] != '\0')
		newstr[i] = (char)s1[i];
	while (s2[a] != '\0')
	{
		newstr[i] = (char)s2[a];
		a++;
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
