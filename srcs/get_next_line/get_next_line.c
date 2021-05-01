/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 13:48:52 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/20 13:50:08 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "memory.h"
#include "str.h"
#include <fcntl.h>
#include <unistd.h>

/*
**	ft_gnl read a file and return it line by line on each call.
**	Do not use it on multiple file descriptor at the same time.
**	1 is returned if gnl succes.
**	0 is returned if the end of file is reached.
**	-1 is returned in case of error.
**	WARNING: ft_gnl use malloc. So it need to be free to avoid leaks.
*/

static int	allocate_str(char **str, char *buf)
{
	char	*tmp;

	tmp = *str;
	*str = ft_strjoin(*str, buf);
	if (!(*str))
		return (-1);
	ft_strdel(&tmp);
	return (0);
}

static int	check_buf(char **str, char *buf)
{
	char	*tmp;

	tmp = ft_strdup(buf);
	if (!*str && !(tmp))
		return (-1);
	*str = tmp;
	if (ft_strchr(buf, '\n'))
		return (0);
	return (1);
}

static int	ft_read_gnl(const int fd, char **str)
{
	char	buf[GNL_BUFF_SIZE + 1];
	int		ret;
	int		ret2;

	if (*str && ft_strchr(*str, '\n'))
		return (1);
	while (1)
	{
		ret = read(fd, buf, GNL_BUFF_SIZE);
		if (ret <= 0)
			break ;
		buf[ret] = '\0';
		if (*str && allocate_str(str, buf) == -1)
			return (-1);
		else
		{
			ret2 = check_buf(str, buf);
			if (ret2 == -1)
				return (-1);
			if (!ret2)
				break ;
		}
	}
	return (ret);
}

int	get_next_line(const int fd, char **line)
{
	static char		*str = NULL;
	char			*tmp;
	int				ret;

	ret = ft_read_gnl(fd, (&str));
	if (fd < 0 || !line || ret < 0)
		return (-1);
	if (ret == 0 && !(str))
		return (0);
	*line = ft_strsub(str, 0, ft_strlen_c(str, '\n'));
	if (!(*line))
		return (-1);
	tmp = str;
	str = ft_strsub(tmp, ft_strlen_c(tmp, '\n') + 1,
			(ft_strlen(tmp) - ft_strlen_c(tmp, '\n')));
	if (!str)
		return (-1);
	ft_strdel(&tmp);
	if (str[0] == '\0')
		ft_strdel(&str);
	return (1);
}
