/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dev_ted.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 07:40:15 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/21 14:27:47 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_check_duplicate(char **tab, char ***tab_char)
{
	int col;
	int row;

	row = 0;
	while (++row <= g_RC)
	{	
		col = 0;
		while (++col <= g_RC)
		{
			// printf("BEFORE: Tab[%d][%d] -- tab_char[%d][%d] : %s\n",row, col, row -1 , col - 1, tab_char[row -1 ][col - 1]);
			ft_compare(tab, tab_char[row - 1 ][col - 1], col, row);
			printf("BEFORE: tab_char[%d][%d] : %s\n", row -1 , col - 1, tab_char[row -1 ][col - 1]);

		}
	}

	row = 0;
	while (++row <= g_RC)
	{	
		col = 0;
		while (++col <= g_RC)
		{
			// printf("BEFORE: Tab[%d][%d] -- tab_char[%d][%d] : %s\n",row, col, row -1 , col - 1, tab_char[row -1 ][col - 1]);
			set_possible_char(tab, tab_char[row - 1 ][col - 1], col, row);
			printf("MID: tab_char[%d][%d] : %s\n", row -1 , col - 1, tab_char[row -1 ][col - 1]);
		}
	}
	row = 0;
	while (++row <= g_RC)
	{	
		col = 0;
		while (++col <= g_RC)
		{
			// printf("BEFORE: Tab[%d][%d] -- tab_char[%d][%d] : %s\n",row, col, row -1 , col - 1, tab_char[row -1 ][col - 1]);
			ft_compare(tab, tab_char[row - 1 ][col - 1], col, row);
			printf("BEFORE: tab_char[%d][%d] : %s\n", row -1 , col - 1, tab_char[row -1 ][col - 1]);

		}
	}
}
