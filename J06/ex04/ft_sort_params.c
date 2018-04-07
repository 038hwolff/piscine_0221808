/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 15:54:36 by hwolff            #+#    #+#             */
/*   Updated: 2018/02/18 18:30:03 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

int			ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void		ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			main(int argc, char **argv)
{
	int		n;
	char	*temp;

	n = 1;
	while (n < argc - 1)
	{
		if ((ft_strcmp(argv[n], argv[n + 1]) > 0))
		{
			temp = argv[n];
			argv[n] = argv[n + 1];
			argv[n + 1] = temp;
			n = 0;
		}
		n++;
	}
	n = 1;
	while (argc - 1)
	{
		ft_putstr(argv[n]);
		ft_putchar('\n');
		argc--;
		n++;
	}
	return (0);
}
