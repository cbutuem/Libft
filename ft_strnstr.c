/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmendes- <cmendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 18:02:50 by cmendes-          #+#    #+#             */
/*   Updated: 2021/06/22 18:02:50 by cmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(const char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
		i++;
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	ii;

	if (*needle == '\0')
		return ((char *)haystack);
	ii = counter(needle);
	while ((*haystack) && (ii <= len--))
	{
		if (!ft_memcmp (haystack, needle, ii))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
