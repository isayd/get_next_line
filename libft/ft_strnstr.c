/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:09:30 by igallego          #+#    #+#             */
/*   Updated: 2016/11/08 13:18:04 by igallego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int j;

	if (!(*little))
		return ((char *)big);
	i = 0;
	j = 0;
	while (big[i] && i < (int)len)
	{
		while (big[i] && little[j] && big[i] == little[j] && i < (int)len)
		{
			i++;
			j++;
		}
		if (j == (int)ft_strlen(little))
			return ((char *)big + i - j);
		else
			i = (i - j) + 1;
		j = 0;
	}
	return (NULL);
}
