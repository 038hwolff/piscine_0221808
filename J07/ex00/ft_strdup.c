/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 15:56:02 by hwolff            #+#    #+#             */
/*   Updated: 2018/02/22 15:13:01 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	dup = NULL;
	i = 0;
	while (src[i])
		i++;
	if (!(dup = (char *)malloc(sizeof(*dup) * (i + 1))))
		return (NULL);
	if (dup)
	{
		i = 0;
		while (src[i])
		{
			dup[i] = src[i];
			i++;
		}
		dup[i] = '\0';
	}
	return (dup);
}
