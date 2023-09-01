/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 09:13:49 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/23 17:02:47 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strcpy(char *dest, char *src)
{
	char	*aux;

	aux = dest;
	while (*src)
	{
		*aux = *src;
		src ++;
		aux ++;
	}
	*aux = '\0';
	return (dest);
}
/*
int	main()
{
    char    *str;
    char    dest[100];
    str  = "hola";

    printf("%s", ft_strcpy(dest, str));
    return (0);
}*/
