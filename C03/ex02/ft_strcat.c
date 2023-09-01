/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:01:22 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/25 14:49:30 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i ++;
	while (*src != '\0')
	{
		dest[i] = *src;
		src ++;
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(int argc, char *args[])
{
	char	dest[20] = "hola";
	if (argc == 2)
		printf("%s", ft_strcat(dest, args[1]));
	return (0);
}*/
