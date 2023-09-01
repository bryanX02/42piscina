/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebgarci <rebgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 12:45:10 by rebgarci          #+#    #+#             */
/*   Updated: 2023/08/12 13:56:48 by rebgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_limit_rows(int x, char limit_char)
{
	int	first_parameter;

	first_parameter = 1;
	while (first_parameter <= x)
	{
		if (first_parameter == 1)
		{
			ft_putchar(limit_char);
		}
		else if (first_parameter <= x - 1)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(limit_char);
		}
		if (first_parameter == x)
		{
			ft_putchar('\n');
		}
		first_parameter++;
	}
}

void	ft_intermediate_rows(int x, int y)
{
	int	second_parameter;
	int	row;

	second_parameter = 0;
	row = 0;
	while (row < y - 2)
	{
		while (second_parameter <= x - 1)
		{
			if (second_parameter == 0 || second_parameter == x - 1)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			second_parameter++;
		}
		second_parameter = 0;
		ft_putchar('\n');
		row++;
	}
}

void	rush(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
		ft_limit_rows(x, 'A');
		if (y > 1)
		{	
			ft_intermediate_rows(x, y);
			ft_limit_rows(x, 'C');
		}
	}
}
