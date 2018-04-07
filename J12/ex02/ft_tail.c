/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 17:36:11 by hwolff            #+#    #+#             */
/*   Updated: 2018/03/01 11:56:02 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft.h"

void	print_error(char *argv)
{
	ft_putstr("./ft_tail: illegal offset -- ", 2);
	ft_putstr(argv, 2);
}

void	standard(void)
{
	int		i;
	char	buf[11];

	while ((i = read(0, buf, 10)))
	{
		buf[i] = '\0';
		ft_putstr(buf, 1);
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	char	buf[11];
	int		i;
	int		j;

	j = 2;
	while (++j < argc)
	{
		fd = open(argv[j], O_RDONLY);
		if (fd == -1)
		{
			print_error(argv[2]);
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
	if (argc == 1)
		standard();
	return (0);
}
