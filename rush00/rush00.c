/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byildiz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 15:01:18 by byildiz           #+#    #+#             */
/*   Updated: 2018/02/10 15:49:29 by byildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_topbot(int x)
{
	ft_putchar('o');
	while (x > 2)
	{
		ft_putchar('-');
		x--;
	}
	if (x > 1)
		ft_putchar('o');
	ft_putchar('\n');
}

void	ft_mid(int x)
{
	ft_putchar('|');
	while (x > 2)
	{
		ft_putchar(' ');
		x--;
	}
	if (x > 1)
		ft_putchar('|');
	ft_putchar('\n');
}

int		rush(int x, int y)
{
	if (x < 1 || y < 1)
		return (-1);
	ft_topbot(x);
	while (y > 2)
	{
		ft_mid(x);
		y--;
	}
	if (y > 1)
		ft_topbot(x);
	return (0);
}
