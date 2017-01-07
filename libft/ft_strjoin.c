/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 21:41:26 by igallego          #+#    #+#             */
/*   Updated: 2016/11/08 23:27:47 by igallego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		i;
	char	*q;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	q = (char *)malloc(sizeof(char) * (len));
	i = 0;
	if (q == NULL)
		return (NULL);
	while (*s1 != '\0')
		q[i++] = *s1++;
	j = 0;
	while (s2[j] != '\0')
	{
		q[i] = s2[j];
		i++;
		j++;
	}
	q[i] = '\0';
	return (q);
}
