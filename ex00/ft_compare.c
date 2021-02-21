#include <unistd.h>
#include "header.h"

//1234\0
int		ft_compare(char **tab, char *str, int col, int row)
{
	int		i;
	int		j;
	int		cpt;

	i = -1;
	if (tab[row][col] != '&')
    {
        while (str[++i] != '\0')
            str[i] = '.';
        return (1);
    }
	while(str[++i] != '\0')
	{
		cpt = 0;
		while(cpt < g_RC)
		{
			j = -1;
			while (++j < g_RC)
				if (str[j] == tab[row][cpt + 1])
					str[j] = '.';
			cpt++;
		}
		cpt = 0;
		while(cpt < g_RC)
		{
			j = -1;
			while (++j < g_RC)
				if (str[j] == tab[cpt + 1][col])
					str[j] = '.';
			cpt++;
		}
	}
	return (0);
}

void	set_possible_char(char **tab, char *str, int col, int row)
{
    int i;
    int points;
    char c;

    points = 0;
    i = -1;
    while (str[++i] != '\0')
    {
        if (str[i] == '.')
        {
            points++;
        }
        else
        {
            c = str[i];
        }
    }
    if (points == g_RC - 1)
    {
        tab[row][col] = c;
    }
}