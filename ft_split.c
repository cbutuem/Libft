/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmendes- <cmendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 21:57:32 by cmendes-          #+#    #+#             */
/*   Updated: 2021/07/22 21:57:32 by cmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	n_linhas(char const *e, char f)
{
	int		i;
	int		ii;

	i = 0;
	ii = 0;
	if ((e[i] == f) || (e[i] == '\0'))
	{
		if ((f == '\0') || (e[i] == '\0'))
			return (1);
	}
	while (e[i] != '\0')
	{
		while (e[i] == f)
			i++;
		if ((e[i] != f) && (e[i] != '\0'))
			ii++;
		while (e[i] != f && e[i] != '\0')
			i++;
	}
	return (ii + 1);
}

static int	start_array(char const *s, char c, int i)
{
	while (s[i] == c)
		i++;
	if ((s[i] != c) && (s[i] != '\0'))
		return (i);
	return (i);
}

static int	size_array(char const *s, char c, int i)
{
	int	n;

	n = 1;
	while ((s[i] != c) && (s[i] != '\0'))
	{
		i++;
		n++;
	}
	if (n > 1)
		return (n);
	return (0);
}

static char	*alo_arrays(const char *s, char c, int i)
{
	char	*a;
	int		ii;

	ii = 0;
	a = (char *) malloc((size_array(s, c, i)) * sizeof(char));
	if (a == NULL)
		return (NULL);
	while ((s[i] != c) && (s[i] != '\0'))
		a[ii++] = s[i++];
	if ((s[i] == c) || (s[i] == '\0'))
		a[ii] = '\0';
	return (a);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		n;
	int		j;

	n = 0;
	i = 0;
	if (!s)
		return (NULL);
	j = n_linhas(s, c);
	str = (char **) malloc(j * sizeof(char *));
	if (str == NULL)
		return (NULL);
	while (n < j - 1)
	{
		i = start_array(s, c, i);
		str[n++] = alo_arrays(s, c, i);
		if ((s[i] != '\0') || (c == '\0'))
			i = i + size_array(s, c, i);
	}
	str[j - 1] = NULL;
	return (str);
}
