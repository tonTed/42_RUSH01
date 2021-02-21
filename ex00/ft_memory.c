/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memory.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 21:35:03 by tonted            #+#    #+#             */
/*   Updated: 2021/02/21 14:55:29 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**ft_malloc_tab_memory()
{
	int i;
	int size;
	char **tab;
	
	i = -1;
	size = g_RC + 2;
	tab = (char **)malloc(size * size * sizeof(char));
	while(i++ < size)
		tab[i] = (char *)malloc(size * sizeof(char));
	return (tab);
}

char	***ft_malloc_tab_char_memory()
{
	int i;
	int j;
	int size;
	char ***tab;
	
	i = -1;
	size = g_RC + 2;
	tab = (char ***)malloc(g_RC * g_RC * (g_RC + 1) * sizeof(char));
	while(i++ <= g_RC)
	{	
		tab[i] = (char **)malloc(g_RC * (g_RC + 1) * sizeof(char));
		j = -1;
		while(j++ <= g_RC)
			tab[i][j] = (char *)malloc((g_RC + 1) * sizeof(char));
	}	
	return (tab);
}

void	ft_free_tab_memory(char **tab, char ***tab_char)
{
	int i;
	int j;
	int size;
	
	i = 0;
	size = g_RC + 2;
	while(i < size)
		free(tab[i++]);
	free(tab);
	
	i = 0;
	while(i++ <= g_RC)
	{	
		j = 1;
		while(j++ < g_RC - 1)
			free(tab_char[i][j]);
		free(tab_char[i]);
	}
	free(tab_char);
}

void	ft_free_tab_test_memory(char **tab)
{
	int i;
	int j;
	int size;
	
	i = 0;
	size = g_RC + 2;
	while(i < size)
		free(tab[i++]);
	free(tab);
}

