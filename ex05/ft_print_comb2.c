/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matranch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 12:15:12 by matranch          #+#    #+#             */
/*   Updated: 2017/08/30 12:03:19 by matranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_imprim(char nombre1, char nombre2, char nombre3, char nombre4)
{
	ft_putchar(nombre1);
	ft_putchar(nombre2);
	ft_putchar(32);
	ft_putchar(nombre3);
	ft_putchar(nombre4);
	ft_putchar(44);
	ft_putchar(32);
}

void ft_condition(char nombre1, char nombre2, char nombre3, char nombre4)
{
	if(nombre4 != nombre2 || nombre3 != nombre1)
	{
		ft_imprim(nombre1, nombre2, nombre3, nombre4);
	}
}

void ft_boucle(char nombre1, char nombre2, char nombre3, char nombre4)
{
	while(nombre1 < 58)
	{
		while(nombre2 < 58)
		{
			while(nombre3 < 58)
			{
				while(nombre4 < 58)
				{
					ft_condition(nombre1, nombre2, nombre3, nombre4);
					nombre4++;
				}
				nombre4 = 48;
				nombre3++;
			}
			nombre3 = 48;
			nombre2++;
		}
		nombre2= 48;
		nombre1++;
	}
}

void ft_print_comb2(void)
{
	char nombre1;
	char nombre2;
	char nombre3;
	char nombre4;

	nombre1 = 48;
	nombre2 = 48;
	nombre3 = 48;
	nombre4 = 48;

	ft_boucle(nombre1, nombre2, nombre3, nombre4);
}

int main()
{
	ft_print_comb2();
	return(0);
}
