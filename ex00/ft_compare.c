/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 15:11:08 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/21 18:24:29 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"

void	ft_compare_row(char **tab, char *str, int row)
{
	int i;
	int j;

	i = 0;
	while (i < g_rc)
	{
		j = -1;
		while (++j < g_rc)
			if (str[j] == tab[row][i + 1])
				str[j] = '.';
		i++;
	}
}

void	ft_compare_col(char **tab, char *str, int col)
{
	int i;
	int j;

	i = 0;
	while (i < g_rc)
	{
		j = -1;
		while (++j < g_rc)
			if (str[j] == tab[i + 1][col])
				str[j] = '.';
		i++;
	}
}

int		ft_compare(char **tab, char *str, int col, int row)
{
	int		i;

	i = -1;
	if (tab[row][col] != '&')
	{
		while (str[++i] != '\0')
			str[i] = '.';
		return (1);
	}
	while (str[++i] != '\0')
	{
		ft_compare_row(tab, str, row);
		ft_compare_col(tab, str, col);
	}
	return (0);
}

void	set_possible_char(char **tab, char *str, int col, int row)
{
	int		i;
	int		points;
	char	c;

	points = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] == '.')
		{
			points++;
		}
		else
		{
			c = str[i];
		}
	}
	if (points == g_rc - 1)
	{
		tab[row][col] = c;
	}
}
