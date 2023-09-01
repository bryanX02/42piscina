/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:24:58 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/17 18:15:28 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 4;
	b = 3;
	write(1, &(char){'0' + a}, 1);
	write(1, &(char){'0' + b}, 1);
	write(1, "\n", 1);
	ft_swap(&a, &b);
	write(1, &(char){'0' + a}, 1);
	write(1, &(char){'0' + b}, 1);
	return (0);
}*/
