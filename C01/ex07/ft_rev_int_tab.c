/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:17:44 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/18 07:33:22 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */

void	ft_rev_int_tab(int *tab, int size)
{
	int	low_position;
	int	high_position;
	int	aux_value;

	low_position = 0;
	high_position = size - 1;
	while (low_position < high_position)
	{
		aux_value = tab[low_position];
		tab[low_position] = tab[high_position];
		tab[high_position] = aux_value;
		low_position ++;
		high_position --;
	}
}
/*
int	main(void)
{
	int	i;
	int	tab[4];

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	ft_rev_int_tab(tab, 4);
	i = 0;
	while (i < 4)
	{
		write(1, &(char){'0' + tab[i]}, 1);
		i ++;
	}
	return (0);
}*/
