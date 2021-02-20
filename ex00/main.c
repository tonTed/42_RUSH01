/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 10:06:47 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/20 17:02:22 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putmax();
int		ft_print_dev(char **tab);
int		ft_print(char **tab);

//int		ft_print_dev(char **tab);				//remove
//int		ft_print(char **tab);
//extern char 	**tab;

int	g_RC = 4;

int main(int argc, char **argv)
{
	// if (argc != 2 || check_errors(argv[1]))
	// 	return (0);

	(void) argc;
	(void) argv;
	// char **tab;
	
	tab = malloc(36 * sizeof(char)); 
	for(int i = 0; i < 6; i++)
		tab[i] = malloc(6 * sizeof(char));

	tab[0][0] = '$';
	tab[0][1] = 'A';
	tab[0][2] = 'B';
	tab[0][3] = 'C';
	tab[0][4] = 'D';
	tab[0][5] = '$';

	tab[1][0] = 'P';
	tab[1][1] = '1';
	tab[1][2] = '2';
	tab[1][3] = '3';
	tab[1][4] = '4';
	tab[1][5] = 'E';

	tab[2][0] = 'O';
	tab[2][1] = '2';
	tab[2][2] = '3';
	tab[2][3] = '4';
	tab[2][4] = '1';
	tab[2][5] = 'F';

	tab[3][0] = 'N';
	tab[3][1] = '3';
	tab[3][2] = '4';
	tab[3][3] = '1';
	tab[3][4] = '2';
	tab[3][5] = 'G';

	tab[4][0] = 'M';
	tab[4][1] = '4';
	tab[4][2] = '1';
	tab[4][3] = '2';
	tab[4][4] = '3';
	tab[4][5] = 'H';

	tab[5][0] = '$';
	tab[5][1] = 'L';
	tab[5][2] = 'K';
	tab[5][3] = 'J';
	tab[5][4] = 'I';
	tab[5][5] = '$';

	ft_putmax();

	// ft_print_dev(tab); 									//remove
	// ft_print(tab);
		for(int i = 0; i < 6; ++i) //remove
			free(tab[i]);		 //remove 
		free(tab); 
	return 0;
}
