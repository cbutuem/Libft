/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: cmendes- <cmendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:20:43 by cmendes-          #+#    #+#             */
/*   Updated: 2021/06/16 19:20:43 by cmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*a;
	unsigned char	b;

	a = (char *) s;
	b = c;
	i = 0;
	while (a[i] != '\0')
		i++;
	if (a[i] == '\0')
	{
		while (i >= 0)
		{
			if (a[i] == b)
				return (&a[i]);
			i--;
		}
	}
	return (0);
}
