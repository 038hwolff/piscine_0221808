/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 11:09:40 by hwolff            #+#    #+#             */
/*   Updated: 2018/02/19 00:21:32 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	dest_size;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		if (j < size - 1)
			dest[j] = src[i];
		j++;
		i++;
	}
	dest[j - 1] = '\0';
	return (j);
}
