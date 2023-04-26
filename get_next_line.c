/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxipeti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:17:53 by maxipeti          #+#    #+#             */
/*   Updated: 2023/04/25 19:19:22 by maxipeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*stash;
	char	*line;

	stash = NULL;	
	while (stash != "/n")
	{
		read_add_stash(fd, stash);
	}
	line = ft_strdup(stash);
	return (line);
}

void	read_add_stash(int fd, char *stash)
{
	char	*buf;

	read (fd, buf, BUFFER_SIZE);
	if (stash = NULL)
	{
		stash = ft_strdup(buf);
	}
	else
		ft_strjoin (stash, buf);
}

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("maxime.txt", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		if (line = NULL)
		{
			break ;
		}
		printf("%s", line);
		free(line);
	}
	return (0);
}
