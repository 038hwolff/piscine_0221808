/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 10:33:12 by hwolff            #+#    #+#             */
/*   Updated: 2018/02/27 20:44:07 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

char				*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	dup = NULL;
	i = 0;
	while (src[i])
		i++;
	if (!(dup = (char *)malloc(sizeof(*dup) * (i + 1))))
		return (NULL);
	if (dup)
	{
		i = 0;
		while (src[i])
		{
			dup[i] = src[i];
			i++;
		}
		dup[i] = '\0';
	}
	return (dup);
}

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par *tab;
	int			i;

	i = 0;
	if (!(tab = ((t_stock_par *)malloc(sizeof(*tab) * (ac + 1)))))
		return (0);
	while (i < ac)
	{
		tab[i].size_param = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		tab[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
