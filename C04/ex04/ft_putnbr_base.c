/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:39:07 by bquilumb          #+#    #+#             */
/*   Updated: 2023/08/30 12:43:04 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdlib.h>*/

void	search_appears(char *base, int *i)
{
	char	aux_appears[100];
	int		j;

	while (*base && *i != -1)
	{
		if (*base != '+' && *base != '-' && *base != ' ')
		{
			j = 0;
			while (j < *i)
			{
				if (aux_appears[j] == *base)
					*i = -1;
				else
					j ++;
			}
			if (*i != -1)
			{
				aux_appears[*i] = *base;
				(*i)++;
				base ++;
			}
		}
		else
			*i = -1;
	}
}

int	parse_arguments(unsigned int *nbr, char *base)
{
	char	*aux_base;
	int		i;

	aux_base = base;
	i = 0;
	search_appears(aux_base, &i);
	if (i < 2)
		i = -1;
	else if (*nbr == 2147483648)
		write(1, "-", 1);
	else if (*nbr < 0)
	{
		write(1, "-", 1);
		*nbr *= -1;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	u_nbr;
	char			nbr_str[100];
	int				base_ln;
	int				i;

	i = 0;
	u_nbr = nbr;
	base_ln = parse_arguments(&u_nbr, base);
	if (base_ln != -1)
	{
		while (u_nbr >= base_ln)
		{
			nbr_str[i] = base[u_nbr % base_ln];
			u_nbr /= base_ln;
			i ++;
		}
		nbr_str[i] = base[u_nbr % base_ln];
		while (i >= 0)
		{
			write(1, &(char){nbr_str[i]}, 1);
			i --;
		}
	}
	else
		write(1, "0", 1);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 3)
		ft_putnbr_base(atoi(argv[1]), argv[2]);
	return (0);
}*/
