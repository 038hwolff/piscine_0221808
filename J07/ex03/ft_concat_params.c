/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:57:21 by hwolff            #+#    #+#             */
/*   Updated: 2018/02/22 15:13:24 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(const char *str)
{
	int		len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char		*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char		*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		len;
	char	*out;

	i = 1;
	len = 0;
	while (i < argc)
	{
		len += ft_strlen(argv[i]) + 1;
		i++;
	}
	len++;
	if (!(out = malloc(len * sizeof(*out))))
		return (NULL);
	if (!out)
		return (NULL);
	i = 1;
	while (i < argc)
	{
		ft_strcat(out, argv[i]);
		if (i < argc - 1)
			ft_strcat(out, "\n");
		i++;
	}
	return (out);
}
