/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 14:45:34 by hwolff            #+#    #+#             */
/*   Updated: 2018/02/27 14:34:42 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *tab_rtn;

	i = 0;
	if (!(tab_rtn = (int *)malloc(sizeof(int) * length)))
		return (0);
	while (i < length)
	{
		tab_rtn[i] = f(tab[i]);
		i++;
	}
	return (tab_rtn);
}
