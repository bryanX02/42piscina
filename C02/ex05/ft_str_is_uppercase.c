/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:20:18 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/23 13:12:46 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_uppercase(char *str)
{
	int	boolean;

	boolean = 1;
	while (*str && boolean == 1)
	{
		if (!(*str >= 65 && *str <= 90))
			boolean = 0;
		str ++;
	}
	return (boolean);
}
/*
int	main(int arg, char *args[])
{
    if (arg == 2)
	    printf("%i", ft_str_is_uppercase(args[1]));
	return (0);
}*/
