/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:45:42 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/17 19:04:51 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &(char){*str}, 1);
		str ++;
	}
}
/*
int	main(void)
{
	char	*str;

	str = "abcde42";
	ft_putstr(str);
	return (0);
}*/
