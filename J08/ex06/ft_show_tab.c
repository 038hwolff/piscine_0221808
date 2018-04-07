/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 16:16:56 by hwolff            #+#    #+#             */
/*   Updated: 2018/02/27 11:36:53 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_par.h"

int			ft_find_len(int nb)
{
	int len;

	len = 1;
	while (nb / 10)
	{
		nb /= 10;
		len *= 10;
	}
	return (len);
}

void		ft_putnbr(int nb)
{
	int len;

	len = ft_find_len(nb);
	if (nb == -2147483648)
	{
		ft_putnbr(-21474);
		ft_putnbr(83648);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		while (len)
		{
			ft_putchar(nb / len + '0');
			nb %= len;
			len /= 10;
		}
	}
}

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		ft_putchar(*(str + i));
		i++;
	}
	ft_putchar('\n');
}

void		ft_show_tab(struct s_stock_par *par)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].copy);
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		j = 0;
		while (par[i].tab[j] != 0)
		{
			ft_putstr(par[i].tab[j]);
			j++;
		}
		i++;
	}
}
