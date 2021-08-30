/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmendes- <cmendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 23:33:36 by cmendes-          #+#    #+#             */
/*   Updated: 2021/06/07 23:33:36 by cmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*a;
	unsigned char		*b;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	b = dst;
	a = src;
	i = 0;
	while (i < n)
	{
		b[i] = a[i];
		i++;
	}
	return (dst);
}
