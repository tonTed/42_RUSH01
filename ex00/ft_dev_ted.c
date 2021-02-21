/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dev_ted.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 07:40:15 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/21 11:34:06 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_set_lines(char **tab,char *input)
{
	int i;
	int row;
	int col;

	i = 0;
	row = 0;
	col = 1;
	while(g_RC != i / 2)
	{ 
		tab[row][col++] = input[i];
		i += 2;
	}
	row = g_RC + 1;
	col = 1;
	while(g_RC * 2 != i / 2)
	{ 
		tab[row][col++] = input[i];
		i += 2;
	}
}

void	ft_set_columns(char **tab,char *input)
{
	int i;
	int row;
	int col;
	
	i = g_RC * 4;
	row = 1;
	col = 0;
	while(g_RC * 3 != i / 2)
	{ 
		tab[row++][col] = input[i];
		i += 2;
	}
	row = 1;
	col = g_RC + 1;
	while(g_RC * 4 != i / 2)
	{ 
		tab[row++][col] = input[i];
		i += 2;
	}	
}

void	ft_set_full(char **tab)
{
	int row;
	int col;

	row = - 1;
	while (++row != g_RC + 2)
	{
		col = -1;
		while (++col != g_RC + 2)
		{
			if ((row == 0 || row == g_RC + 1) && 
				(col == 0 || col == g_RC + 1))
				tab[row][col] = '!';
			else
				tab[row][col] = '&';
		}
	}
}

void	ft_set_tab_char(char ***tab_char)
{
	(void) tab_char;
	int row;
	int col;
	int c;

	row = - 1;
	while (++row != g_RC)
	{
		col = -1;
		while (++col != g_RC)
		{
			c = -1;
			while(++c != g_RC)
			{
				tab_char[row][col][c] = '1' + c;	
			}
			tab_char[row][col][c] = '\0';
			printf("string tab[%d][%d]: %s\n", row, col, tab_char[row][col]);
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

