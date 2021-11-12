/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_varhex_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:59:39 by vdescamp          #+#    #+#             */
/*   Updated: 2021/11/12 17:31:53 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_varhex_x(int i)
{
	char		*base;
	char		c;
	long int	nb;
	int			j;

	j = 0;
	nb = i;
	base = "123456789abcdef";
	if (nb > 16)
	{
		ft_varhex_x(nb / 16);
		ft_varhex_x(nb % 16);
	}
	if (nb < 16)
	{
		ft_putchar(base[nb]);
		j++;
	}
	return (j);
}
