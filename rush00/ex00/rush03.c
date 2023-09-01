/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebgarci <rebgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 12:45:10 by rebgarci          #+#    #+#             */
/*   Updated: 2023/08/13 16:45:24 by rebgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_limit_rows(int x)
{
	int	current_column;

	current_column = 1;
	while (current_column <= x)
	{
		if (current_column == 1)
		{
			ft_putchar('A');
		}
		else if (current_column <= x - 1)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar('C');
			ft_putchar('\n');
		}
		current_column++;
	}
}

void	ft_intermediate_rows(int x, int y)
{
	int	current_column;
	int	current_row;

	current_column = 0;
	current_row = 0;
	while (current_row < y - 2)
	{
		while (current_column <= x - 1)
		{
			if (current_column == 0 || current_column == x - 1)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			current_column++;
		}
		current_column = 0;
		ft_putchar('\n');
		current_row++;
	}
}

void	rush(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
		ft_limit_rows(x);
		if (y > 1)
		{
			ft_intermediate_rows(x, y);
			ft_limit_rows(x);
		}
	}	
}
