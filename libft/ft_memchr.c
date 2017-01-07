/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 20:48:10 by igallego          #+#    #+#             */
/*   Updated: 2016/11/07 21:07:38 by igallego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	a;
	unsigned char	*b;

	a = (unsigned char)c;
	b = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		if (b[i] == a)
			return (&b[i]);
		n--;
		i++;
	}
	return (NULL);
}
