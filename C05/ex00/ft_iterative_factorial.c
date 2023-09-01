/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:02:21 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/30 13:19:32 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>
#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 0;
	if (nb == 0)
		factorial = 1;
	else if (nb > 0)
	{
		factorial = nb;
		while (nb != 1)
		{
			nb --;
			factorial *= nb;
		}
	}
	return (factorial);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%i", ft_iterative_factorial(atoi(argv[1])));
	return (0);
}*/
