/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 14:52:26 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/20 16:52:27 by tblanco          ###   ########.fr       */
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
			return (i);
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
		printf("%c\n\n", tab[row][col]);
		if(tab[row][col] == 'A')
		{
			index = 0;
			while(++index <= g_RC)
			{
				printf("%c\n\n", tab[index][col]);
			}
		}
	}
	while(++row <= g_RC)
	{
		printf("SECOND LOOP row: %d, col: %d\n", row, col);
		printf("%c\n\n", tab[row][col]);
	}	
	while(--col >= 1)
	{
		printf("FIRST LOOP row: %d, col: %d\n", row, col);
		printf("%c\n\n", tab[row][col]);
	}
	while(--row >= 1)
	{
		printf("SECOND LOOP row: %d, col: %d\n", row, col);
		printf("%c\n\n", tab[row][col]);
	}	
}