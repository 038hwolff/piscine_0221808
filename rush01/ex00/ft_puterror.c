/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 14:59:13 by hwolff            #+#    #+#             */
/*   Updated: 2018/02/18 19:35:12 by adbelkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_puterror(void)
{
	ft_putchar('E');
	ft_putchar('r');
	ft_putchar('r');
	ft_putchar('o');
	ft_putchar('r');
	ft_putchar('\n');
	return (0);
}
