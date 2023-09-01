/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <bquilumb@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:41:43 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/23 13:34:29 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strlowcase(char *str)
{
	char	*aux;

	aux = str;
	while (*aux)
	{
		if (*aux >= 65 && *aux <= 90)
			*aux += 32;
		aux ++;
	}
	return (str);
}

int	ft_is_alpha(char str)
{
	int	boolean;

	boolean = 1;
	if (!((str >= 65 && str <= 90) || (str >= 97 && str <= 122)))
		boolean = 0;
	return (boolean);
}

int	ft_is_numeric(char str)
{
	int	boolean;

	boolean = 1;
	if (!(str >= 48 && str <= 57))
		boolean = 0;
	return (boolean);
}

char	*ft_strcapitalize(char *str)
{
	char	*aux;

	aux = ft_strlowcase(str);
	while (*aux)
	{
		if (ft_is_alpha(*aux) && (!ft_is_alpha(*(aux - 1)) || aux == str))
		{
			if (!ft_is_numeric(*aux) && !ft_is_numeric(*(aux - 1)))
				*aux -= 32;
		}
		aux ++;
	}
	return (str);
}
/*
int	main(int arg, char *args[])
{
	if (arg == 2)
		printf("%s", ft_strcapitalize(args[1]));
	return (0);
}*/
