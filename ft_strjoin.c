/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmendes- <cmendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 19:38:26 by cmendes-          #+#    #+#             */
/*   Updated: 2021/07/22 19:38:26 by cmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	contador(char const *b, char const *c)
{
	int		i;
	int		ii;
	int		t;

	i = 0;
	ii = 0;
	t = 0;
	while (b[i] != '\0')
		i++;
	while (c[ii] != '\0')
		ii++;
	t = i + ii + 1;
	return (t);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		ii;
	int		j;
	char	*a;

	i = 0;
	ii = 0;
	j = 0;
	if ((!s1) || (!s2))
		return (NULL);
	a = (char *) malloc(contador(s1, s2));
	if (a == NULL)
		return (NULL);
	while (s1[i] != '\0')
		a[j++] = s1[i++];
	while (s2[ii] != '\0')
		a[j++] = s2[ii++];
	if (s2[ii] == '\0')
		a[j] = '\0';
	return (a);
}
