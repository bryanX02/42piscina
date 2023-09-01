/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:31:56 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/31 20:01:02 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_order(char *args[], int *sizes, int argc)
{
	int		higher;
	int		counter;
	int		i;

	counter = 1;
	while (counter < argc)
	{
		i = 1;
		higher = 1;
		while (i < argc)
		{
			if (sizes[i] > sizes[higher])
				higher = i;
			i ++;
		}
		while (*args[higher])
		{
			write(1, args[higher], 1);
			args[higher]++;
		}
		write(1, "\n", 1);
		sizes[higher] = 0;
		counter ++;
	}
}

int	main(int argc, char *argv[])
{
	int		ascii_sizes[10];
	char	*aux_arg;
	int		i;

	i = 1;
	while (i < argc)
	{
		aux_arg = argv[i];
		while (*aux_arg)
		{
			ascii_sizes[i] += *aux_arg;
			aux_arg++;
		}
		i ++;
	}
	print_order(argv, ascii_sizes, argc);
	return (0);
}
