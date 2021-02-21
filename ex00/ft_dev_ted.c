/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dev_ted.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 07:40:15 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/21 15:43:53 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_check_duplicate(char **tab, char ***tab_char)
{
	int col;
	int row;

	row = 0;
	while (++row <= g_RC)
	{
		col = 0;
		while (++col <= g_RC)
			ft_compare(tab, tab_char[row - 1][col - 1], col, row);
	}
}

void	ft_set_full_copy(char **tab, char **tab_origin)
{
	int row;
	int col;

	row = - 1;
	while (++row != g_RC + 2)
	{
		col = -1;
		while (++col != g_RC + 2)
			tab[row][col] = tab_origin[row][col];
	}
}

int		ft_resolve_test(char **tab,char ***tab_str, int row, int col)
{
	char	*str;
	char	**tab_test;
	int		i;
	int		ret;
	
	i = 0;
	ret = 0;
	tab_test = ft_malloc_tab_memory();
	ft_set_full_copy(tab_test, tab);
	if (tab[col][row] == '&')
		str = tab_str[col][row];
	while (str[i] != '\0')
	{
		if (str[i] != '.')
		{
			tab_test[col][row] == str[i];
			if (ft_compare_last(tab_test, str, col, row) != 0)
				i++;
			else
				break ;
		}
		i++;
	}
	ft_free_tab_test_memory(tab_test);
}

int     ft_last_resolve(char **tab, char ***tab_str)
{
	int i;
	int row;
	int col;

	row  = -1;
	while (++row <= g_RC)
	{
		col = -1;
		while (++col <= g_RC)
		ft_resolve_test(tab, tab_str, row, col);
	}
}

// int     ft_last_resolve(char **tab, char ***tab_str)
// {
// 	char **tab_test;
// 	int i;
// 	int cpt;
// 	char *str;
// 	int row;
// 	int col;
// 	int val_return;
// 	val_return = 0;
// 	row  = -1;
// 	col = -1;
// 	i = 0;
// 	cpt = 0;

// 	tab_test = ft_malloc_tab_memory();
// 	ft_set_full_copy(tab_test, tab);
// 	ft_free_tab_test_memory(tab_test);

// 	while (++row <= g_RC)
// 	{
// 		while (++col <= g_RC)
// 		{
// 			if (tab[col][row] == '&')
// 			{
// 				str = tab_str[col][row];
// 			}
// 			while (str[i] != '\0')
// 			{
// 				if (str[i] != '.')
// 				{
// 					tab_test[col][row] == str[i];
// 					val_return = ft_compare_last(tab_test, str, col, row);
// 					if (val_return != 0)
// 					{
// 						i++;
// 					}
// 					else
// 					{
// 						break ;
// 					}
// 				}
// 				i++;
// 			}
// 		}
// 	}
// 	ft_free_tab_test_memory(tab_test);
// }

int     ft_last_resolve(char **tab, char ***tab_str)
{
	char **tab_test;
	int i;
	int cpt;
	char *str;
	int row;
	int col;
	int val_return;
	val_return = 0;
	row  = -1;
	col = -1;
	i = 0;
	cpt = 0;

	tab_test = ft_malloc_tab_memory();
	ft_set_full_copy(tab_test, tab);
	ft_free_tab_test_memory(tab_test);

	while (++row <= g_RC)
	{
		while (++col <= g_RC)
		{
			if (tab[col][row] == '&')
			{
				str = tab_str[col][row];
			}
			while (str[i] != '\0')
			{
				if (str[i] != '.')
				{
					tab_test[col][row] == str[i];
					val_return = ft_compare_last(tab_test, str, col, row);
					if (val_return != 0)
					{
						i++;
					}
					else
					{
						break ;
					}
				}
				i++;
			}
		}
	}
	ft_free_tab_test_memory(tab_test);
}