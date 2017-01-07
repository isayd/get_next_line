/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:08:58 by igallego          #+#    #+#             */
/*   Updated: 2016/11/08 21:14:55 by igallego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
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
		while (s[i] != '\0')
		{
			q[i] = f(i, s[i]);
			i++;
		}
		q[i] = '\0';
		return (q);
	}
	return (NULL);
}
