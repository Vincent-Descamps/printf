/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_varint_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:16:02 by vdescamp          #+#    #+#             */
/*   Updated: 2021/11/12 14:28:12 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_varint_i(int i)
{
	long int	nb;
	int			j;

	nb = i;
	j = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_varint_i(nb / 10);
		ft_varint_i(nb % 10);
	}
	if (nb < 10)
	{
		nb = (nb % 10);
		nb = nb + '0';
		ft_putchar(nb);
		j++;
	}
	return (j);
}
