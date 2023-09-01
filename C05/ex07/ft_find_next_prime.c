/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:08:39 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/31 17:20:17 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>
#include <stdio.h>*/

int	ft_is_prime(int nb)
{
	int	is_prime;
	int	aux;

	is_prime = 1;
	if (nb > 1)
	{
		aux = nb / 2;
		while (aux != 1 && is_prime)
		{
			if (nb % aux == 0)
				is_prime = 0;
			aux --;
		}
	}
	else
		is_prime = 0;
	return (is_prime);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb ++;
	return (nb);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%i", ft_find_next_prime(atoi(argv[1])));
	return (0);
}*/
