/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 22:32:58 by hwolff            #+#    #+#             */
/*   Updated: 2018/02/21 14:57:27 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int x;
	int n;
	int nb;

	x = 0;
	nb = 0;
	n = 1;
	while ((str[x] == ' ') || (str[x] == '\t') || (str[x] == '\n')
			|| (str[x] == '\v') || (str[x] == '\f') || (str[x] == '\r'))
		x++;
	if (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
			n = -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		nb = nb * 10 + (str[x] - '0');
		x++;
	}
	return (nb * n);
}
