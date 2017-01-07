/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igallego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 16:28:06 by igallego          #+#    #+#             */
/*   Updated: 2017/01/03 16:28:09 by igallego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		buscando(int const fd, char *buff, char *s[fd])
{
	char		*tmp;
	char		*p;
	int			i;

	while (!(VAL) && (i = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[i] = '\0';
		tmp = s[fd];
		s[fd] = ft_strjoin(tmp, buff);
		ft_strdel(&tmp);
	}
	if (i == -1)
		return (-1);
	if (i == 0 && !ft_strlen(s[fd]))
		return (0);
	return (1);
}

int				get_next_line(int const fd, char **line)
{
	static char	*s[1025];
	int			i;
	char		buff[BUFF_SIZE + 1];

	if (fd < 0 || !line || read(fd, buff, 0) < 0)
		return (-1);
	if (!s[fd])
		s[fd] = ft_strnew(1);
	if ((i = buscando(fd, buff, &*s)) == -1)
		return (-1);
	if (i == 0)
	{
		*line = s[fd];
		s[fd] = NULL;
		return (0);
	}
	if (ft_strchr(s[fd], '\n'))
		*line = ft_strsub(s[fd], 0, ft_strchr(s[fd], '\n') - s[fd]);
	else
		*line = ft_strdup(s[fd]);
	if (ft_strchr(s[fd], '\n'))
		s[fd] = ft_strdup(ft_strchr(s[fd], '\n') + 1);
	else
		ft_strdel(&s[fd]);
	return (1);
}
