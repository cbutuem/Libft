/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmendes- <cmendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 12:37:23 by cmendes-          #+#    #+#             */
/*   Updated: 2021/06/22 12:37:23 by cmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	size_t			ii;
	size_t			maxsize;

	ii = 0;
	i = 0;
	if (dstsize < ft_strlen(dst))
		maxsize = dstsize + ft_strlen(src);
	else
		maxsize = ft_strlen(dst) + ft_strlen(src);
	if (dstsize != 0)
		i = ft_strlen(dst);
	if ((dstsize != 0) && (dst != NULL) && (dstsize >= ft_strlen(dst)))
	{
		while ((i < dstsize - 1) && (src[ii] != '\0'))
			dst[i++] = src[ii++];
		dst[i] = '\0';
	}
	return (maxsize);
}
