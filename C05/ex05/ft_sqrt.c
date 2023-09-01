/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:06:53 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/30 16:40:58 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>
#include <stdio.h>*/

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	while (sqrt * sqrt < nb && sqrt * sqrt != 0)
		sqrt ++;
	if ((sqrt * sqrt) != nb || nb == 0)
		sqrt = 0;
	return (sqrt);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%i", ft_sqrt(atoi(argv[1])));
	return (0);
}*/
