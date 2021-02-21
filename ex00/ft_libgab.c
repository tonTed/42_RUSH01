/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libgab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 13:05:51 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/21 16:53:45 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_print_dev(char **tab)
{
	int		row;
	int		col;
	int		p__;

	row = -1;
	p__ = -1;
	while (++p__ < g_rc * 10)
	{
		ft_putchar('-');
	}
	ft_putchar('\n');
	while (row++ < g_rc + 1)
	{
		col = -1;
		while (col++ < g_rc + 1)
		{
			ft_putchar(tab[row][col]);
			if (col != g_rc + 1)
				write(1, "  |  ", 5);
		}
		ft_putchar('\n');
		p__ = -1;
		while (++p__ < g_rc * 10)
		{
			ft_putchar('-');
		}
		ft_putchar('\n');
	}
	ft_putchar('\n');
	return (0);
}

int		ft_print(char **tab)
{
	int		i;
	int		j;

	i = 0;
	while (i++ < g_rc)
	{
		j = 0;
		while (j++ < g_rc)
		{
			ft_putchar(tab[i][j]);
			if (j != g_rc)
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
	return (0);
}

int		check_errors(char *str)
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
			return (401);
	}
	if (!(count % 4 == 0))
		return (402);
	g_rc = count / 4;
	i = 0;
	while (str[i + 1])
	{
		if (str[i] < '1' || str[i] > g_rc + '0')
			return (403);
		i += 2;
	}
	return (1);
}
