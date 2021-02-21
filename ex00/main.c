/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 10:06:47 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/21 18:33:44 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	char **tab;
	char ***tab_char;

	if (!(argc != 2 || check_errors(argv[1])))
		return (0);
	tab = ft_malloc_tab_memory();
	tab_char = ft_malloc_tab_char_memory();
	ft_set_tab(tab, tab_char, argv[1]);
	ft_first_step(tab);
	ft_second_step(tab);
	ft_check_duplicate(tab, tab_char);
	ft_print(tab);
	ft_free_tab_memory(tab, tab_char);
	return (0);
}
