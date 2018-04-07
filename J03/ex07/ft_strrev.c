/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 22:07:57 by hwolff            #+#    #+#             */
/*   Updated: 2018/02/21 14:57:35 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	tmp;

	len = 0;
	while (str[len])
		len++;
	i = 0;
	len--;
	tmp = str[len];
	while (i < len)
	{
		tmp = str[len];
		str[len] = str[i];
		str[i] = tmp;
		len--;
		i++;
	}
	return (str);
}
