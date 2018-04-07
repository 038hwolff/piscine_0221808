/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byildiz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 14:56:14 by byildiz           #+#    #+#             */
/*   Updated: 2018/02/24 14:32:37 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi(char *str);

int		rush(int x, int y);

int		main(int argc, char **argv)
{
	(void)argc;
	rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
