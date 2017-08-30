/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matranch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 12:28:58 by matranch          #+#    #+#             */
/*   Updated: 2017/08/29 13:43:07 by matranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_imprim(char nombre1, char nombre2, char nombre3)
{
	ft_putchar(nombre1);
	ft_putchar(nombre2);
	ft_putchar(nombre3);
	if (nombre3 != 57 || nombre2 != 56 || nombre1 != 55)
	{
		ft_putchar(44);
		ft_putchar(32);
	}
}

void	ft_condition(char nombre1, char nombre2, char nombre3)
{
	if (nombre1 != nombre2)
	{
		if (nombre1 != nombre3)
		{
			if (nombre2 != nombre3)
			{
				if (nombre1 < nombre2 && nombre2 < nombre3)
				{
					ft_imprim(nombre1, nombre2, nombre3);
				}
			}
		}
	}
}

void	ft_print_comb(void)
{
	char nombre1;
	char nombre2;
	char nombre3;

	nombre1 = 48;
	nombre2 = 48;
	nombre3 = 48;
	while (nombre1 < 58)
	{
		while (nombre2 < 58)
		{
			while (nombre3 < 58)
			{
				ft_condition(nombre1, nombre2, nombre3);
				nombre3++;
			}
			nombre3 = 48;
			nombre2++;
		}
		nombre2 = 48;
		nombre1++;
	}
}
