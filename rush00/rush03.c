/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byildiz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 15:01:18 by byildiz           #+#    #+#             */
/*   Updated: 2018/02/10 16:03:23 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_topbot(int x)
{
	ft_putchar('A');
	while (x > 2)
	{
		ft_putchar('B');
		x--;
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	ft_mid(int x)
{
	ft_putchar('B');
	while (x > 2)
	{
		ft_putchar(' ');
		x--;
	}
	if (x > 1)
		ft_putchar('B');
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
