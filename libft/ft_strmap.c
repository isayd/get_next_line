/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:02:17 by igallego          #+#    #+#             */
/*   Updated: 2016/11/08 21:14:44 by igallego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*q;
	int		i;
	int		j;

	if (s == 0)
	{
	}
	else
	{
		i = 0;
		j = ft_strlen((char *)s);
		q = (char *)malloc(sizeof(char) * (j + 1));
		if (!q)
			return (NULL);
		while (s[i] != 0)
		{
			q[i] = f(s[i]);
			i++;
		}
		q[i] = '\0';
		return (q);
	}
	return (NULL);
}
