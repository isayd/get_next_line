/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:33:29 by igallego          #+#    #+#             */
/*   Updated: 2016/11/08 14:58:15 by igallego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*q;
	size_t	i;

	q = (char *)malloc(sizeof(char) * size + 1);
	i = 0;
	if (!q)
		return (NULL);
	while (i <= size)
	{
		q[i] = '\0';
		i++;
	}
	return (q);
}
