#include "header.h"

void     ft_last_resolve(char **tab, char ***tab_str)
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
					tab_test[col][row] = str[i];
					val_return = ft_compare_last(tab_test, str, col, row);
					printf("HERE\n");
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

void	ft_write_tab(char **tab, char **tab_test, int col, int row)
{
	tab[col][row] = tab_test[col][row];
}

int		ft_compare_last(char **tab_test, char *str, int col, int row)
{
	int		i;
	char	*match_str;

	i = 0;
	match_str = "....";
	ft_compare(tab_test, str, col, row);
	printf("HERE\n");

	if (str == match_str)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}