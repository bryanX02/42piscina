/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:04:07 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/30 14:38:40 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>
#include <stdio.h>*/

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 0;
	if (power == 0)
		result = 1;
	else if (power > 0)
	{
		result = nb;
		while (power > 1)
		{
			result *= nb;
			power --;
		}
	}
	return (result);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%i", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}*/
