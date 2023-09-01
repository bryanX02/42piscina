/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 10:26:27 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/23 13:06:46 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*aux;

	i = 0;
	aux = dest;
	while (*src && i < n)
	{
		*aux = *src;
		src ++;
		aux ++;
		i ++;
	}
	while (i < n)
	{
		*aux = '\0';
		aux ++;
		i ++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[100];
	char	*src;
	int		n;

	n = 10;
	src = "holaa";
	printf("%s", ft_strncpy(dest, src, n));
	return (0);
}*/
