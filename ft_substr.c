/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmendes- <cmendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 16:51:18 by cmendes-          #+#    #+#             */
/*   Updated: 2021/07/20 16:51:18 by cmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	sub_size(char const *str, int b, size_t t)
{
	int		i;
	size_t	n;

	i = 0;
	n = 1;
	while (str[i] != '\0')
	{
		if (i == b)
		{
			while ((n <= t) && (str[i] != '\0'))
			{
				n++;
				i++;
			}
			if (str[i] == '\0')
				n++;
			return (n);
		}
		i++;
	}
	return (n);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	ii;
	char	*c;

	i = 0;
	ii = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	c = (char *) ft_calloc(sub_size(s, start, len), sizeof(char));
	if (c == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i == start)
		{
			while ((ii < len) && (s[i] != '\0'))
				c[ii++] = s[i++];
			c[ii] = '\0';
			return (c);
		}
		i++;
	}
	return (c);
}
