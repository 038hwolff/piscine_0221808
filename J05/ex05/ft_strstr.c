/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 12:29:52 by hwolff            #+#    #+#             */
/*   Updated: 2018/02/18 22:34:48 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			j++;
			i++;
		}
		if (!to_find[j])
			return (&str[i - j]);
		i = i - j;
		i++;
	}
	return (0);
}
