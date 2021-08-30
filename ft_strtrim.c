/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmendes- <cmendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 21:57:32 by cmendes-          #+#    #+#             */
/*   Updated: 2021/07/22 21:57:32 by cmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_trim_ini(char const *s1, char const *set)
{	
	int		i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	return (i);
}

static int	num_trim_final(char const *s1, char const *set)
{	
	int		i;

	i = ft_strlen (s1);
	while (s1 && ft_strchr(set, s1[i]))
		i--;
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*c;
	size_t	i;
	size_t	i_mal;

	if ((!s1) || (!set))
		return (NULL);
	i = num_trim_ini(s1, set);
	if (i == ft_strlen(s1))
		return (ft_strdup(""));
	i_mal = num_trim_final(&s1[i], set);
	c = ft_substr(s1, i, i_mal);
	return (c);
}
