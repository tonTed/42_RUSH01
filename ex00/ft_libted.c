/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 14:52:26 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/20 18:48:44 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (!(nb > 2147395600))
	while (++i <= nb)
		if (i * i == nb && nb % i == 0)
		{
			g_RC = i;
			return (1);
		}
	return 0;
}

void	ft_putmax()
{	
	int row;
	int col;
	int index;

	
	row = 0;
	col = 0;	
	while(++col <= g_RC)
	{
		printf("FIRST LOOP row: %d, col: %d\n", row, col);
		if(tab[row][col] == g_RC + '0')
		{
			index = 0;
			while(++index <= g_RC)
			{
				tab[index][col] = index + '0';
			}
		}
	}
	while(++row <= g_RC)
	{
		printf("SECOND LOOP row: %d, col: %d\n", row, col);
		if(tab[row][col] == g_RC + '0')
		{
			index = 0;
			while(++index <= g_RC)
			{
				tab[row][index] = g_RC - index + 1 + '0';
			}
		}
	}	
	while(--col >= 1)
	{
		printf("THIRD LOOP row: %d, col: %d\n", row, col);
		if(tab[row][col] == g_RC + '0')
		{
			index = 0;
			while(++index <= g_RC)
			{
				tab[index][col] = g_RC - index + 1 + '0';
			}
		}
	}
	while(--row >= 1)
	{
		printf("FOUR LOOP row: %d, col: %d\n", row, col);
		if(tab[row][col] == g_RC + '0')
		{
			index = 0;
			while(++index <= g_RC)
			{
				tab[row][index] = index + '0';
			}
		}
	}	
}