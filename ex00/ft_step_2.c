/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_second_step.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 20:21:02 by tonted            #+#    #+#             */
/*   Updated: 2021/02/20 23:51:27 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	In the second step
*/

#include "header.h"

void	ft_second_step_up(char **tab)
{
	int row;
	int col;
	int index;

	row = 0;
	col = 0;
	while (++col <= g_rc)
	{
		index = 0;
		if (tab[row][col] == g_rc + '0' - 1 && tab[g_rc][col] == '1')
			while (++index < g_rc)
				tab[index][col] = index + '1';
		else if (tab[row][col] == '2' && tab[row + 1][col] == '3')
			tab[row + 2][col] = g_rc + '0';
	}
}

void	ft_second_step_right(char **tab)
{
	int row;
	int col;
	int index;

	row = 0;
	col = g_rc + 1;
	while (++row <= g_rc)
	{
		index = 1;
		if (tab[row][col] == g_rc + '0' - 1 && tab[row][1] == '1')
			while (++index <= g_rc)
				tab[row][index] = g_rc - index + 1 + '1';
		else if (tab[row][col] == '2' && tab[row][col - 1] == '3')
			tab[row][g_rc - 2] = g_rc + '0';
	}
}

void	ft_second_step_down(char **tab)
{
	int row;
	int col;
	int index;

	row = g_rc + 1;
	col = 0;
	while (++col <= g_rc)
	{
		index = 0;
		if (tab[row][col] == g_rc + '0')
			while (++index <= g_rc)
				tab[index][col] = g_rc - index + 1 + '0';
		else if (tab[row][col] == '1')
			tab[g_rc][col] = g_rc + '0';
	}
}

void	ft_second_step_left(char **tab)
{
	int row;
	int col;
	int index;

	row = 0;
	col = 0;
	while (++row <= g_rc)
	{
		index = 0;
		if (tab[row][col] == g_rc + '0')
			while (++index <= g_rc)
				tab[row][index] = index + '0';
		else if (tab[row][col] == '1')
			tab[row][++index] = g_rc + '0';
	}
}

void	ft_second_step(char **tab)
{
	ft_second_step_up(tab);
	ft_second_step_right(tab);
	ft_second_step_down(tab);
	ft_second_step_left(tab);
}
