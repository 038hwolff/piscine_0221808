/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:18:25 by hwolff            #+#    #+#             */
/*   Updated: 2018/02/28 15:00:05 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	buf[11];
	int		i;

	if (argc == 1)
		ft_putstr("File name missing.\n", 2);
	else if (argc > 2)
		ft_putstr("Too many arguments.\n", 2);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("open() error", 2);
			return (1);
		}
		while ((i = read(fd, buf, 10)))
		{
			buf[i] = '\0';
			ft_putstr(buf, 1);
		}
		if (close(fd) == -1)
			ft_putstr("close() error", 2);
	}
	return (0);
}
