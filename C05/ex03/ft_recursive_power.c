/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:05:38 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/31 17:21:31 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>
#include <stdio.h>*/

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 0;
	if (power == 0)
		result = 1;
	else if (power > 0)
	{
		result = nb;
		result *= ft_recursive_power(nb, power - 1);
	}
	return (result);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%i", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}*/
