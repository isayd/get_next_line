/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 16:38:25 by igallego          #+#    #+#             */
/*   Updated: 2016/11/10 21:40:42 by igallego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	contar(int i)
{
	int j;

	j = 0;
	if (i <= 0)
		j++;
	while (i != 0)
	{
		i /= 10;
		j++;
	}
	return (j);
}

char		*ft_itoa(int n)
{
	char	*q;
	int		i;
	int		num;

	num = n;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = contar(num);
	if (!(q = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	if (num < 0)
		num *= -1;
	q[i] = '\0';
	while (num != 0)
	{
		q[--i] = (num % 10) + '0';
		num /= 10;
	}
	num = n;
	if (num < 0)
		q[0] = '-';
	return (q);
}
