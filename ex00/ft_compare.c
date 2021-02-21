/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 15:11:08 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/21 16:49:18 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"

int		ft_compare(char **tab, char *str, int col, int row)
{
	int		i;
	int		j;
	int		cpt;

	i = -1;
	if (tab[row][col] != '&')
	{
		while (str[++i] != '\0')
			str[i] = '.';
		return (1);
	}
	while (str[++i] != '\0')
	{
		cpt = 0;
		while (cpt < g_rc)
		{
			j = -1;
			while (++j < g_rc)
				if (str[j] == tab[row][cpt + 1])
					str[j] = '.';
			cpt++;
		}
		cpt = 0;
		while (cpt < g_rc)
		{
			j = -1;
			while (++j < g_rc)
				if (str[j] == tab[cpt + 1][col])
					str[j] = '.';
			cpt++;
		}
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
