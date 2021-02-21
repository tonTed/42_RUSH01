/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 10:06:47 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/20 22:48:03 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main(int argc, char **argv)
{
	argv[1] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";		//remove
	
	char **tab;

	if (!(argc != 1 || check_errors(argv[1])))			// change argc != 2
		return (0);
	tab = ft_malloc_tab_memory();

	dev_set_tab(tab);
	ft_print_dev(tab);
	printf("is in row: %d\n", ft_is_in_row('2', 1, tab));
	printf("is in col: %d\n", ft_is_in_row('4', 4, tab));
	ft_first_step(tab);
	printf("is in row: %d\n", ft_is_in_row('2', 1, tab));
	printf("is in col: %d\n", ft_is_in_row('4', 4, tab));
	ft_print_dev(tab);

	ft_free_tab_memory(tab);
	return 0;
} 
