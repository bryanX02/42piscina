/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:53:14 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/16 10:33:19 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}
/*
int	main(void)
{
	int	i;

	i = '0';
	while (i < '9')
	{
		ft_putchar(i);
		i++;
	}
	ft_putchar('\n');
	return (0);
}*/
