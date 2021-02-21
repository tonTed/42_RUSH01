/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 10:06:47 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/21 16:37:48 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main(int argc, char **argv)
{
	(void) argc;
	argv[1] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";		//remove
	argv[1] = "1 2 2 2 4 3 2 1 1 2 2 2 4 3 2 1";		//remove
	// argv[1] = "5 2 1 3 2 2 3 3 2 2 3 4 5 2 1 2 3 2 4 2 3 2 1 3 4 2 3 4 1 2 3 2";		//remove
	
	char **tab;
	char ***tab_char;

	// if (!(argc != 1 || check_errors(argv[1])))			// change argc != 2
	// 	return (0);
	printf("mainc.c || return errors: %d\n", check_errors(argv[1]));
	tab = ft_malloc_tab_memory();
	tab_char = ft_malloc_tab_char_memory();

	// dev_set_tab(tab);
	ft_set_tab(tab, tab_char, argv[1]);
	ft_first_step(tab);
	ft_second_step(tab);
	ft_print_dev(tab);
	ft_check_duplicate(tab, tab_char);
	ft_print_dev(tab);
	// ft_last_resolve(tab, tab_char);
	// ft_print_dev(tab);

	ft_free_tab_memory(tab, tab_char);
	return 0;
} 
