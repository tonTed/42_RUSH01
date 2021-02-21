/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dev_ted.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 07:40:15 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/21 13:00:11 by tblanco          ###   ########.fr       */
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
			ft_compare(tab, tab_char[row -1 ][col - 1], col, row);
			printf("tab_char[%d][%d] : %s\n", row -1 , col - 1, tab_char[row -1 ][col - 1]);
		}
	}
}
