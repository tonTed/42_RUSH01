/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 10:06:47 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/20 14:12:23 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		check_errors(char *str)
{

}

int main(int argc, char **argv)
{
	if (argc != 2 || check_errors(argv[1]))
		return (0);


	char **tab;
	
	tab = malloc(36 * sizeof(char)); 
	for(int i = 0; i < 6; i++)
		tab[i] = malloc(6 * sizeof(char));

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

	int k = -1;
	int j;
	while(k++ < 5)
	{	
		j = -1;
		while (j++ < 5)
		{
			printf("%c", tab[k][j]);
			printf("  |  ");
		}
	printf("\n");
	printf("----------------------------------");
	printf("\n");
	}

	for(int i = 0; i < 6; ++i) 
		free(tab[i]); 
	free(tab);
	
	return 0;
}
