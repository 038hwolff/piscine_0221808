/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 11:45:05 by hwolff            #+#    #+#             */
/*   Updated: 2018/02/26 20:52:07 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_stock_par
{
	int			size_param;
	char		*str;
	char		*copy;
	char		**tab;
}				t_stock_par;

void			ft_putchar(char c);
char			**ft_split_whitespaces(char *str);
void			ft_show_tab(struct s_stock_par *par);

#endif
