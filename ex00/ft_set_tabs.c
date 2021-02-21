/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_tabs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 12:32:49 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/21 16:49:53 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_set_lines(char **tab, char *input)
{
	int i;
	int row;
	int col;

	i = 0;
	row = 0;
	col = 1;
	while (g_rc != i / 2)
	{
		tab[row][col++] = input[i];
		i += 2;
	}
	row = g_rc + 1;
	col = 1;
	while (g_rc * 2 != i / 2)
	{
		tab[row][col++] = input[i];
		i += 2;
	}
}

void	ft_set_columns(char **tab, char *input)
{
	int i;
	int row;
	int col;

	i = g_rc * 4;
	row = 1;
	col = 0;
	while (g_rc * 3 != i / 2)
	{
		tab[row++][col] = input[i];
		i += 2;
	}
	row = 1;
	col = g_rc + 1;
	while (g_rc * 4 != i / 2)
	{
		tab[row++][col] = input[i];
		i += 2;
	}
}

void	ft_set_full(char **tab)
{
	int row;
	int col;

	row = -1;
	while (++row != g_rc + 2)
	{
		col = -1;
		while (++col != g_rc + 2)
		{
			if ((row == 0 || row == g_rc + 1) &&
				(col == 0 || col == g_rc + 1))
				tab[row][col] = '!';
			else
				tab[row][col] = '&';
		}
	}
}

void	ft_set_tab_char(char ***tab_char)
{
	int row;
	int col;
	int c;

	row = -1;
	while (++row != g_rc)
	{
		col = -1;
		while (++col != g_rc)
		{
			c = -1;
			while (++c != g_rc)
			{
				tab_char[row][col][c] = '1' + c;
			}
			tab_char[row][col][c] = '\0';
		}
	}
}

void	ft_set_tab(char **tab, char ***tab_char, char *input)
{
	ft_set_full(tab);
	ft_set_lines(tab, input);
	ft_set_columns(tab, input);
	ft_set_tab_char(tab_char);
}
