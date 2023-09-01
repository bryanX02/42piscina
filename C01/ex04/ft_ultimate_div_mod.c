/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:19:17 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/17 18:43:30 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<unistd.h> */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a /= *b;
	*b = c % *b;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	write(1, &(char){'0' + a}, 1);
	write(1, &(char){'0' + b}, 1);
	return (0);
}*/
