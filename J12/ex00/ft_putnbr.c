/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 16:05:56 by hwolff            #+#    #+#             */
/*   Updated: 2018/02/28 14:48:23 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c);
void	ft_putnbr(int nb);

int		ft_find_len(int nb)
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

void	ft_putnbr(int nb)
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
