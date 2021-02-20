/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 14:52:26 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/20 14:52:37 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (!(nb > 2147395600))
	while (++i <= nb)
		if (i * i == nb && nb % i == 0)
			return (i);
	return 0;
}