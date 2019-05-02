/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/29 11:34:50 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/27 01:37:27 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		ft_lecture(const int fd, char *buffer, char **rd)
{
	int			res;
	char		*tmp;

	while (((ft_strchr(buffer, '\n') == NULL) &&
				(res = read(fd, buffer, BUFF_SIZE)) > 0))
	{
		buffer[res] = '\0';
		tmp = *rd;
		*rd = ft_strjoin(tmp, buffer);
		ft_strdel(&tmp);
	}
	if (buffer)
		ft_strdel(&buffer);
	if (res == -1)
		return (-1);
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	char		*buffer;
	static char	*rd[5000];
	int			pr;
	char		*str;
	char		*tmp;

	buffer = ft_strnew(BUFF_SIZE);
	if (fd < 0 || line == NULL || BUFF_SIZE < 1 || buffer == NULL ||
			read(fd, *line, 0) < 0)
		return (-1);
	if (rd[fd] == NULL)
		rd[fd] = ft_strnew(1);
	if (((pr = ft_lecture(fd, buffer, &rd[fd])) == -1))
		return (-1);
	if ((str = ft_strchr(rd[fd], '\n')) != NULL)
	{
		*line = ft_strsub(rd[fd], 0, (str - rd[fd]));
		tmp = rd[fd];
		rd[fd] = ft_strdup(str + 1);
		ft_strdel(&tmp);
		return (1);
	}
	*line = ft_strdup(rd[fd]);
	rd[fd] = NULL;
	return (ft_strlen(*line) > 0 ? 1 : 0);
}
