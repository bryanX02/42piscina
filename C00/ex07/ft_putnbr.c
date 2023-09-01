/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:05:58 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/16 17:14:20 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == 0)
		write(1, "0", 1);
	else if (nb == -2147483648)
		write(1, "-2147483648", 12);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
		{
			write(1, &(char){'0' + nb}, 1);
		}
	}
}

/*int	main(void)
{
	ft_putnbr(42);
	write(1, "\n", 2);
	ft_putnbr(1);
	write(1, "\n", 2);
	ft_putnbr(0);
	write(1, "\n", 2);
	ft_putnbr(-1);
	write(1, "\n", 2);
	ft_putnbr(10000);
	write(1, "\n", 2);
	ft_putnbr(-2147483648);
	write(1, "\n", 2);
	ft_putnbr(2147483647);
	return (0);
}*/
