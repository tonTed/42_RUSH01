#ifndef HEADER_H
#define HEADER_H


int 	ft_print_dev(char **tab);               //remove
int     ft_print(char **tab);
void 	ft_putchar(char c);
int		ft_sqrt(int nb);
int		check_errors(char *str);
void	ft_first_step(char **tab);
char	**ft_malloc_tab_memory();
char	***ft_malloc_tab_char_memory();
void	ft_free_tab_memory(char **tab, char ***tab_char);
int		ft_is_in_row(char c, int row, char **tab);
int		ft_is_in_col(char c, int col, char **tab);
void	ft_second_step(char **tab);
void	ft_set_tab(char **tab, char ***tab_char, char *input);
int		ft_compare(char **tab, char *str, int col, int row);
void	ft_check_duplicate(char **tab, char ***tab_char);
void    set_possible_char(char **tab, char *str, int col, int row);
void	ft_free_tab_test_memory(char **tab);

int		g_RC;


#include <unistd.h>
#include <stdlib.h>


// REMOVE
void	dev_set_tab();
#include <stdio.h> 
// REMOVE


#endif