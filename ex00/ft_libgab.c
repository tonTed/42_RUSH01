/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libgab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcollet <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 13:05:51 by gcollet           #+#    #+#             */
/*   Updated: 2021/02/20 14:12:19 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>

//void	ft_putchar(char c);

int		ft_print_dev(char **tab)
{
	int		i;
	int		j;

	i = -1;
	write(1, "--------------------------------", 32);
	ft_putchar('\n');
	while (i++ < 5)
	{
		j = -1;
		while (j++ < 5)
		{
			ft_putchar(tab[i][j]);
			if (j != 5)

			write(1, "  |  ", 5);
		}
	ft_putchar('\n');
	write(1, "--------------------------------", 32);
	ft_putchar('\n');
	}
	ft_putchar('\n');
	return 0;
}

//version du print standard
int		ft_print(char **tab)
{
	int 	i;
	int		j;

	i = 0;
	while (i++ < 4)
	{
		j = 0;
		while (j++ < 4)
		{
			ft_putchar(tab[i][j]);
			if (j != 4)
				ft_putchar(' ');
		}
	ft_putchar('\n');
	}
	return 0;
}
