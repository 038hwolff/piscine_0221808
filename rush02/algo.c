/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 18:55:57 by hwolff            #+#    #+#             */
/*   Updated: 2018/02/27 14:33:37 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int		count_newlines(char* c)
{
	int i;
	int newlines;

	i = 0;
	newlines = 0;
	while(c[i])
	{
		if(c[i] == '\n')
			newlines++;
		i++;
	}
	if(strlen(c) > 0 && newlines == 0)
		return (1);
	return (newlines + 1);
}

int		is_correct_format(char* str, char allowed[])
{
	char* token = NULL;
	token = strtok(str, "\n");
	int len_of_first_token = -1;
	while (token != NULL) 
	{
		if(len_of_first_token == -1)
			len_of_first_token = strlen(token);
		else if(strlen(token) != len_of_first_token)
			return (0);
		token = strtok(NULL, "\n");
	}
	int i;
	int k;

	i = 0;
	k = 0;
	while(str[i])
	{
		int ok = 0;
		while(k < strlen(allowed))
		{
			if(str[i] == allowed[k])
				ok = 1;
			k++;
		}
		k = 0;
		if(ok == 0)
			return (0);
		i++;
	}
	return len_of_first_token;
}

void		print_rush_calls(int dim1, int dim2, char ftname[])
{
	write(1, &ftname, 8);
	write(1, &dim1, 1);
	write(1, &dim2, 1);
	write(1, "\n", 1);
}

int		main(int argc, char** argv)
{
	if(argc != 2)
	{
		write(1, "aucune\n", 7);
		return (1);
	}

	if(strlen(argv[1]) > 0) 
	{
		int newlines = count_newlines(argv[1]);

		char allowedrush00[] = "o|-\n\t\0";
		char allowedrush01[] = "*/\\\n\t\0";
		char allowedrush02[] = "ABC\n\t\0";
		char allowedrush03[] = "ABC\n\t\0";
		char allowedrush04[] = "ABC\n\t\0";

		int rush00 = is_correct_format(argv[1], allowedrush00);
		int rush01 = is_correct_format(argv[1], allowedrush01);
		int rush02 = is_correct_format(argv[1], allowedrush02);
		int rush03 = is_correct_format(argv[1], allowedrush03);
		int rush04 = is_correct_format(argv[1], allowedrush03);

		if(newlines > 0 && rush00 > 0)
			print_rush_calls(newlines,rush00,"colle-00");
		if(newlines > 0 && rush01 > 0)
			print_rush_calls(newlines,rush01,"colle-01");
		if(newlines > 0 && rush02 > 0)
			print_rush_calls(newlines,rush02,"colle-02");
		if(newlines > 0 && rush03 > 0)
			print_rush_calls(newlines,rush03,"colle-03");
		if(newlines > 0 && rush04 > 0)
			print_rush_calls(newlines,rush04,"colle-04");
		if(rush00 == 0 && rush01 == 0 && rush02 == 0 && rush03 == 0 
				&& rush04 == 0)
			write(1, "aucune\n", 7);
	}
	return (0);
}
