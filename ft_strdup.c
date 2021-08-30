/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmendes- <cmendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:14:10 by cmendes-          #+#    #+#             */
/*   Updated: 2021/07/19 16:14:10 by cmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*a;
	char	*b;

	i = 0;
	b = (char *) s1;
	while (b[i] != '\0')
		i++;
	a = (char *) malloc(i + 1);
	if (a == NULL)
		return (NULL);
	while (i >= 0)
	{
		a[i] = b[i];
		i--;
	}
	return (a);
}
