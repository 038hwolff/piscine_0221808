/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 16:52:43 by hwolff            #+#    #+#             */
/*   Updated: 2018/02/22 15:13:09 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	if (min >= max)
	{
		tab = 0;
		return (0);
	}
	if (!(tab = (int *)malloc(sizeof(*tab) * (max - min))))
		return (0);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
