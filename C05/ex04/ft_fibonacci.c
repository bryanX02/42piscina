/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:06:14 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/30 16:06:15 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>
#include <stdio.h>*/

int	ft_fibonacci(int index)
{
	int	fibo;

	if (index < 0)
		fibo = -1;
	else if (index == 0)
		fibo = 0;
	else if (index == 1)
		fibo = 1;
	else
		fibo = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (fibo);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%i", ft_fibonacci(atoi(argv[1])));
	return (0);
}*/
