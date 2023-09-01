/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:43:35 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/25 14:58:12 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i ++;
	while (*src != '\0' && j < nb)
	{
		dest[i] = *src;
		src ++;
		i ++;
		j ++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(int argc, char *args[])
{
    char    		dest[20] = "hola";
	unsigned int	nb;

	nb = *args[2] - '0';
    if (argc == 3)
        printf("%s", ft_strncat(dest, args[1], nb));
    return (0);
}*/
