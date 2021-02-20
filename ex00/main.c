/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 10:06:47 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/20 14:13:30 by gcollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"
#include <stdlib.h>

//int		ft_print_dev(char **tab);				//remove
//int		ft_print(char **tab);
//extern char 	**tab;

int main()
{
	
	//input = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";


	int i = 0;
	tab =(char **) malloc(36 * sizeof(char*)); 
		for(int i = 0; i < 6; ++i) 
			tab[i] = malloc( 6 *sizeof(char)); 


	tab[0][0] = '$';
	tab[0][1] = '4';
	tab[0][2] = '3';
	tab[0][3] = '2';
	tab[0][4] = '1';
	tab[0][5] = '$';

	tab[1][0] = '4';
	tab[1][1] = '1';
	tab[1][2] = '2';
	tab[1][3] = '3';
	tab[1][4] = '4';
	tab[1][5] = '1';

	tab[2][0] = '3';
	tab[2][1] = '2';
	tab[2][2] = '3';
	tab[2][3] = '4';
	tab[2][4] = '1';
	tab[2][5] = '2';

	tab[3][0] = '2';
	tab[3][1] = '3';
	tab[3][2] = '4';
	tab[3][3] = '1';
	tab[3][4] = '2';
	tab[3][5] = '2';

	tab[4][0] = '1';
	tab[4][1] = '4';
	tab[4][2] = '1';
	tab[4][3] = '2';
	tab[4][4] = '3';
	tab[4][5] = '2';

	tab[5][0] = '$';
	tab[5][1] = '1';
	tab[5][2] = '2';
	tab[5][3] = '2';
	tab[5][4] = '2';
	tab[5][5] = '$';

	ft_print_dev(tab); 									//remove
	ft_print(tab);
		for(int i = 0; i < 6; ++i) //remove
			free(tab[i]); //remove 
		free(tab); 
	return 0;
}
