#include "header.h"

void	dev_set_tab(char **tab)
{
	tab[5][5] = '$';
	tab[5][1] = '4';
	tab[5][2] = '3';
	tab[5][3] = '2';
	tab[5][4] = '1';
	tab[5][0] = '$';

	tab[1][5] = '4';
	tab[1][1] = '&';
	tab[1][2] = '&';
	tab[1][3] = '&';
	tab[1][4] = '&';
	tab[1][0] = '1';

	tab[2][5] = '3';
	tab[2][1] = '&';
	tab[2][2] = '&';
	tab[2][3] = '&';
	tab[2][4] = '&';
	tab[2][0] = '2';

	tab[3][5] = '2';
	tab[3][1] = '&';
	tab[3][2] = '&';
	tab[3][3] = '&';
	tab[3][4] = '&';
	tab[3][0] = '2';

	tab[4][5] = '1';
	tab[4][1] = '&';
	tab[4][2] = '&';
	tab[4][3] = '&';
	tab[4][4] = '&';
	tab[4][0] = '2';

	tab[0][5] = '$';
	tab[0][1] = '1';
	tab[0][2] = '2';
	tab[0][3] = '2';
	tab[0][4] = '2';
	tab[0][0] = '$';

	// tab[0][0] = '$';
	// tab[0][1] = '4';
	// tab[0][2] = '3';
	// tab[0][3] = '2';
	// tab[0][4] = '1';
	// tab[0][5] = '$';

	// tab[1][0] = '4';
	// tab[1][1] = '1';
	// tab[1][2] = '2';
	// tab[1][3] = '3';
	// tab[1][4] = '4';
	// tab[1][5] = '1';

	// tab[2][0] = '3';
	// tab[2][1] = '2';
	// tab[2][2] = '3';
	// tab[2][3] = '4';
	// tab[2][4] = '1';
	// tab[2][5] = '2';

	// tab[3][0] = '2';
	// tab[3][1] = '3';
	// tab[3][2] = '4';
	// tab[3][3] = '1';
	// tab[3][4] = '2';
	// tab[3][5] = '2';

	// tab[4][0] = '1';
	// tab[4][1] = '4';
	// tab[4][2] = '1';
	// tab[4][3] = '2';
	// tab[4][4] = '3';
	// tab[4][5] = '2';

	// tab[5][0] = '$';
	// tab[5][1] = '1';
	// tab[5][2] = '2';
	// tab[5][3] = '2';
	// tab[5][4] = '2';
	// tab[5][5] = '$';
}