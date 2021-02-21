/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dev_ted.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 07:40:15 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/21 18:27:48 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_check_duplicate(char **tab, char ***tab_char)
{
	int col;
	int row;

	row = 0;
	while (++row <= g_rc)
	{
		col = 0;
		while (++col <= g_rc)
		{
			ft_compare(tab, tab_char[row - 1][col - 1], col, row);
		}
	}
}

void	ft_set_full_copy(char **tab, char **tab_origin)
{
	int row;
	int col;

	row = -1;
	while (++row != g_rc + 2)
	{
		col = -1;
		while (++col != g_rc + 2)
			tab[row][col] = tab_origin[row][col];
	}
}
