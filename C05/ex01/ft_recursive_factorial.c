/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:05:03 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/30 13:26:35 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>
#include <stdio.h>*/

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	factorial = 0;
	if (nb == 0)
		factorial = 1;
	else if (nb > 0)
	{
		factorial = nb;
		factorial *= ft_recursive_factorial(nb - 1);
	}
	return (factorial);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%i", ft_recursive_factorial(atoi(argv[1])));
	return (0);
}*/
