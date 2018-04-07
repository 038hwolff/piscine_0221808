/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 22:51:41 by hwolff            #+#    #+#             */
/*   Updated: 2018/02/18 22:51:44 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		create_tab(int tab[9][9], char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			while (argv[i][j] != '\0')
			{
				if (argv[i][j] == '.')
					tab[i][j] = '0';
				else if (argv[i][j])
					tab[i][j] = ((argv[i][j]));
				else
					return (0);
				j++;
			}
		}
		i++;
	}
	return (1);
}
