/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 00:25:01 by hwolff            #+#    #+#             */
/*   Updated: 2018/02/19 00:49:13 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

int			check_base(char *base)
{
	int i;
	int z;

	i = 0;
	z = 0;
	if (base [0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base [i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z]
					return (0);
			z++;
		}
		i++;
	}
	return (1);
}
void		ft_putnbr_base(int nbr, char *base)
{
	int sbase;
	int final[100];
	int i;

	i = 0;
	sbase = 0;
	if (check_base(sbase))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar(' ');
		}
		while (base[sbase])
			sbase++;
		while (nbr)
		{
			final[i] = nbr % sbase;
			nbr = nbr / sbase;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[final[i]]);
	}
}
