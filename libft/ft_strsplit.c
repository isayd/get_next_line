/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 00:50:33 by igallego          #+#    #+#             */
/*   Updated: 2016/11/11 00:52:12 by igallego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numletras(char const *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}

static int	numpalabras(char const *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c != '\0')
			j++;
		while (s[i] != c && s[i + 1] != '\0')
			i++;
		i++;
	}
	return (j);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**q;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (!s)
		return (NULL);
	if (!(q = (char **)malloc(sizeof(char*) * (numpalabras(s, c) + 1))))
		return (NULL);
	while (j < numpalabras(s, c))
	{
		q[j] = (char *)malloc(sizeof(char) * numletras(&s[k], c) + 1);
		while (s[k] == c)
			k++;
		i = 0;
		while (s[k] != c && s[k] != '\0')
			q[j][i++] = s[k++];
		q[j][i] = '\0';
		j++;
	}
	q[j] = 0;
	return (q);
}
