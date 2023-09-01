/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 07:36:04 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/18 08:13:50 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	k;
	int	aux_value;

	i = 0;
	while (i < size - 1)
	{
		k = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[k])
				k = j;
			j++;
		}
		if (k != i)
		{
			aux_value = tab[i];
			tab[i] = tab[k];
			tab[k] = aux_value;
		}
		i ++;
	}
}
/*
int	main(void)
{
	int	i;
	int	tab[4];

	tab[0] = 4;
	tab[1] = 0;
	tab[2] = 2;
	tab[3] = 1;
	ft_sort_int_tab(tab, 4);
	i = 0;
	while (i < 4)
	{
		write(1, &(char){'0' + tab[i]}, 1);
		i ++;
	}
	return (0);
}*/
