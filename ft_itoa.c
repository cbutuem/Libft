/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmendes- <cmendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 18:37:43 by cmendes-          #+#    #+#             */
/*   Updated: 2021/07/30 18:37:43 by cmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ta_mal(int t)
{
	int		i;

	i = 0;
	if (t <= 0)
	{
		t = t * -1;
		i++;
	}
	while (t)
	{
		t /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		back;
	char	*s;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	back = n;
	i = ta_mal(back);
	s = (char *) malloc((i + 1) * sizeof (char));
	if (s == NULL)
		return (NULL);
	if (n < 0)
		back = back * -1;
	s[i--] = '\0';
	while (i >= 0)
	{
		s[i--] = back % 10 + '0';
		back = back / 10;
	}	
	if (n < 0)
		s[0] = '-';
	return (s);
}
