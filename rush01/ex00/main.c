/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 22:51:31 by hwolff            #+#    #+#             */
/*   Updated: 2018/02/18 22:56:46 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void		ft_putchar(char c);
void		ft_putstr(char *str);
int			ft_puterror(void);
int			ft_check_length(char *argv);
int			ft_check_alpha(char *argv);
int			place(int tab[9][9], int position);
int			in_column(int k, int tab[9][9], int j);
int			in_line(int k, int tab[9][9], int i);
int			in_block(int k, int tab[9][9], int i, int j);
int			create_tab(int tab[9][9], char **argv);
void		print(int tab[9][9]);
int			ft_print_params(int argc, char **argv);

int			main(int argc, char **argv)
{
	int i;
	int tab[9][9];

	tab[0][0] = 9;
	i = 1;
	if (argc != 10)
	{
		ft_puterror();
		return (0);
	}
	while (argc != 1)
	{
		if ((!(ft_check_length(argv[i])) || (!(ft_check_alpha(argv[i])))))
		{
			ft_puterror();
			return (0);
		}
		argc--;
		i++;
	}
	argc = 10;
	create_tab(tab, &argv[1]);
	place(tab, 0);
	print(tab);
	return (0);
}
