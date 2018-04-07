/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 22:51:03 by hwolff            #+#    #+#             */
/*   Updated: 2018/02/18 22:51:07 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		in_line(int k, int grille[9][9], int i)
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (grille[i][j] == k)
			return (1);
		j++;
	}
	return (0);
}

int		in_column(int k, int grille[9][9], int j)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (grille[i][j] == k)
			return (1);
		i++;
	}
	return (0);
}

int		in_block(int k, int grille[9][9], int i, int j)
{
	int i_block;
	int j_block;

	i_block = i - (i % 3) + 2;
	j_block = j - (j % 3) + 2;
	while (i <= i_block)
	{
		while (j <= j_block)
		{
			if (grille[i][j] == k)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		place(int grille[9][9], int position)
{
	int k;
	int i;
	int j;

	k = 0;
	if (position == 81)
		return (1);
	i = position / 9;
	j = position % 9;
	if (grille[i][j] != 0)
		return (place(grille, position + 1));
	while (++k <= 9)
	{
		if (in_line(k, grille, i) && in_column(k, grille, j)
				&& in_block(k, grille, i, j))
		{
			grille[i][j] = k;
			if (place(grille, position + 1))
				return (0);
		}
	}
	grille[i][j] = 0;
	return (1);
}
