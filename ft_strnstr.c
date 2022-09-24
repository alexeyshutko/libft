/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolyxen <gpolyxen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:25:02 by gpolyxen          #+#    #+#             */
/*   Updated: 2022/07/07 15:25:05 by gpolyxen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	l;

	i = 0;
	if (!ft_strncmp(haystack, needle, ft_strlen(needle)))
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		l = 0;
		if ((haystack[i]) == (needle[l]))
		{
			while ((haystack[i + l] == needle[l])
				&& (i + l) < len)
			{
				l++;
			}
		}
		if (l == ft_strlen(needle))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
