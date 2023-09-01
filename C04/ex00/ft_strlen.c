/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:37:16 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/28 12:48:40 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		counter ++;
		str ++;
	}
	return (counter);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%i", ft_strlen(argv[1]));
	return (0);
}*/
