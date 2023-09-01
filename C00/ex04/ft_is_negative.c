/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:37:50 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/16 10:32:57 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	symbol;

	symbol = 'P';
	if (n < 0)
	{
		symbol = 'N';
	}
	write(1, &symbol, 1);
}
/*
int	main(void)
{
	write(1, "El numero 1 es -> ", 19);
	ft_is_negative(1);
	write(1, "\n", 2);
	write(1, "El numero -1 es -> ", 20);
	ft_is_negative(-1);
	return (0);
}*/
