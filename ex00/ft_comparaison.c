#include <unistd.h>
#include "header.h"

//1234\0
int		ft_compare(char **tab, char *str, int col, int row)
{
	int		i;
	int		cpt;

	i = 0;
	if (tab[row][col] != '&')
	{
		while (str[i] != '\0')
		{
			str[i] = '.';
			i++;
		}
		return (1);
	}
	while(str[i] != '\0')
	{
		cpt = 0;
		while(cpt++ <= g_RC)
		{
			if (str[cpt] == tab[col][cpt])
			{
				str[cpt] = '.';
				break ;
			}
		}
		cpt = 0;
		while(cpt++ <= g_RC)
		{
			if (str[cpt] == tab[cpt][row])
			{
				str[cpt] = '.';
				break ;
			}
		}
		i++;
	}
	return (0);
}