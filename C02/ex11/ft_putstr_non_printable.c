/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:19:26 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/23 17:18:47 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <unistd.h>

int	ft_is_printable(char str)
{
	int	boolean;

	boolean = 1;
	if (!(str >= 32 && str <= 126))
		boolean = 0;
	return (boolean);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (ft_is_printable(*str))
			write(1, &(char){*str}, 1);
		else
		{
			write(1, "\\", 1);
			write(1, &(char){(*str / 16) + '0'}, 1);
			if ((*str % 16) < 10)
				write(1, &(char){(*str % 16) + '0'}, 1);
			else
			{
				if (*str < 16)
					write(1, &(char){(*str % 16) % 10 + 97}, 1);
				else
					write(1, &(char){(*str % 16) + 97}, 1);
			}
		}
		str ++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("hola\n");
	return (0);
}*/
