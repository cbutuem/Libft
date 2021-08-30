/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmendes- <cmendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 12:37:23 by cmendes-          #+#    #+#             */
/*   Updated: 2021/06/22 12:37:23 by cmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *) src;
	b = (unsigned char *) dst;
	i = 0;
	if ((a == NULL) && (dstsize == '\0'))
		return (0);
	while ((i + 1 < dstsize) && (a[i] != '\0'))
	{
		b[i] = a[i];
		i++;
	}
	if ((dstsize != 0) && (b != NULL) && ((i + 1 == dstsize) || (a[i] == '\0')))
		b[i] = '\0';
	while (a[i] != '\0')
		i++;
	return (i);
}
