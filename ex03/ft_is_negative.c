/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matranch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 09:41:29 by matranch          #+#    #+#             */
/*   Updated: 2017/08/29 11:55:04 by matranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char pour;

	if (n < 0)
	{
		pour = 'N';
	}
	if (n >= 0)
	{
		pour = 'P';
	}
	ft_putchar(pour);
}
