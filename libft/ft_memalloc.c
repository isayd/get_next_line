/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 13:49:38 by igallego          #+#    #+#             */
/*   Updated: 2016/11/08 14:51:43 by igallego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *p;

	p = (char *)malloc(sizeof(char) * size);
	if (!p)
		return (NULL);
	ft_memset((void *)p, 0, size);
	return ((void *)p);
}
