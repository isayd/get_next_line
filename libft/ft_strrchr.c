/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 18:28:42 by igallego          #+#    #+#             */
/*   Updated: 2016/11/08 12:53:36 by igallego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		tam;

	p = (char*)s;
	tam = (ft_strlen(p));
	while (tam >= 0)
	{
		if (p[tam] == c)
			return (&p[tam]);
		tam--;
	}
	return (NULL);
}
