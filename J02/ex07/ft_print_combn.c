/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 23:05:43 by hwolff            #+#    #+#             */
/*   Updated: 2018/02/14 13:24:15 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_nbr(int str[], int n)
{
	int i;

	i = 0;
	while( i != )
	{
		ft_putchar( i);
				i++;
	}
}

void		ft_print_precombn(int data[], int index, int n)
{
	if (index == n)
	{
		ft_putstr(data, n);
		return;
	}
	for (int i = 0; i < 10; i++)
	{
		data[index] = i;
		ft_print_combn(data, index + 1, n);
	}
}

void		ft_print_combn(int n)
{
	int	data[14];
	ft_print_precombn(data, 0, n);
}

int		main(void)
{
	ft_print_combn(2);
	return (0);
}
