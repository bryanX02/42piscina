/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 12:57:42 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/16 10:38:47 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* We need to print the combination of 2 numbers with 2 digits.
The numbers cant repeat (01 02 ... -> 02 01 not).
So, the number 1 start in 00 to 98, and the number2 in number1 + 1 to 99.
This method do the task using 2 while loops for each number.*/
void	ft_print_comb2(void)
{
	int	number1;
	int	number2;

	number1 = 0;
	number2 = 1;
	while (number1 < 99)
	{
		while (number2 <= 99)
		{
			write(1, &(char){'0' + number1 / 10}, 1);
			write(1, &(char){'0' + number1 % 10}, 1);
			write(1, " ", 1);
			write(1, &(char){'0' + number2 / 10}, 1);
			write(1, &(char){'0' + number2 % 10}, 1);
			if (number1 != 98)
				write(1, ", ", 2);
			number2++;
		}
		number1++;
		number2 = number1 + 1;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
