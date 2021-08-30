/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmendes- <cmendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 11:52:04 by cmendes-          #+#    #+#             */
/*   Updated: 2021/06/18 11:52:04 by cmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_process(unsigned char *a, unsigned char *b, size_t len)
{
	size_t		i;

	i = 0;
	if (a >= b)
	{
		while (i < len)
		{
			b[i] = a[i];
			i++;
		}
	}
	if (a < b)
	{
		while (len != 0)
		{
			b[i + len - 1] = a[i + len - 1];
			len--;
		}
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *) src;
	b = dst;
	if (!dst && !src)
		return (NULL);
	ft_process(a, b, len);
	return (dst);
}
