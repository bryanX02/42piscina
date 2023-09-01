/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:31:07 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/31 17:55:15 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	order;

	order = 1;
	while (order < argc)
	{
		while (*argv[order])
		{
			write(1, argv[order], 1);
			argv[order]++;
		}
		write(1, "\n", 1);
		order ++;
	}
	return (0);
}
