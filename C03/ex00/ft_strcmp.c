/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:33:30 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/28 11:09:11 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	cmp;

	cmp = 0;
	while ((*s1 || *s2) && cmp == 0)
	{
		if (*s1 != *s2)
			cmp = *s1 - *s2;
		else
		{
			s1 ++;
			s2 ++;
		}	
	}
	return (cmp);
}
/*
int main(int argc, char *args[])
{
    if (argc == 3)
        printf("%i", ft_strcmp(args[1], args[2])); 
    return (0);
}*/
