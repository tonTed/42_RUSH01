/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 13:18:42 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/21 08:47:19 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_sqrt(int nb)
{
	printf("NB >> nb: %d\n", nb);
	int i;

	i = 0;
	if (!(nb > 2147395600))
	while (++i <= nb)
	{		
		printf("i: %d, nb = %d, i * i: %d\n", i, nb, i * i);
		if (i * i == nb && nb % i == 0)
		{
			g_RC = i;
			printf("g_RC: %d\n",g_RC);
			return (1);
		}
	}
	printf("BEFORE R0 >> g_RC: %d\n", i);
	return 0;
}
