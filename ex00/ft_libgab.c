/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libgab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 13:05:51 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/21 07:37:23 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_print_dev(char **tab)
{
	int		i;
	int		j;

	i = -1;
	write(1, "--------------------------------", 32);
	ft_putchar('\n');
	while (i++ < 5)
	{
		j = -1;
		while (j++ < 5)
		{
			ft_putchar(tab[i][j]);
			if (j != 5)

			write(1, "  |  ", 5);
		}
	ft_putchar('\n');
	write(1, "--------------------------------", 32);
	ft_putchar('\n');
	}
	ft_putchar('\n');
	return 0;
}

//version du print standard
int		ft_print(char **tab)
{
	int 	i;
	int		j;

	i = 0;
	while (i++ < 4)
	{
		j = 0;
		while (j++ < 4)
		{
			ft_putchar(tab[i][j]);
			if (j != 4)
				ft_putchar(' ');
		}
	ft_putchar('\n');
	}
	return 0;
}

int check_errors(char *str)
{
	int i;
	int count;

	i = -1;
	count = 0;
	while (str[++i])
	{
		if (str[i] != ' ')
			++count;
		if (str[i] < '1' && str[i] > '9' && str[i] != ' ')
			return (404);
	}
	if (!(ft_sqrt(count)))
		return (404);
	i = 0;
	while (str[i + 1])
	{
		if (str[i] < '1' || str[i] > g_RC + '0')
			return (404);
		i += 2;
	}
		return(1);
}
