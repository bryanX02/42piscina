/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:08:12 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/23 13:10:06 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_lowercase(char *str)
{
	int	boolean;

	boolean = 1;
	while (*str && boolean == 1)
	{
		if (!(*str >= 97 && *str <= 122))
			boolean = 0;
		str ++;
	}
	return (boolean);
}
/*
int	main(int arg, char *args[])
{
    if (arg == 2)
	    printf("%i", ft_str_is_lowercase(args[1]));
	return (0);
}*/
