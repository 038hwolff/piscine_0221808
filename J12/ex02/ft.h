/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 10:04:24 by hwolff            #+#    #+#             */
/*   Updated: 2018/03/01 11:15:55 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>

void		ft_putchar(char c);
void		ft_putstr(char *str, int fd);
void		ft_putnbr(int nb);
int			ft_atoi(char *str);
int			ft_strlen(char *str);
#endif
