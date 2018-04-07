/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 20:48:37 by hwolff            #+#    #+#             */
/*   Updated: 2018/02/14 10:46:08 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index >= 2)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	return (-1);
}
