/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_varunsint_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:16:01 by vdescamp          #+#    #+#             */
/*   Updated: 2021/11/12 14:28:12 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_varunsint_u(unsigned int u)
{
	unsigned int	nb;
	int				j;

	nb = u;
	j = 0;
	if (nb >= 10)
	{
		ft_varunsint_u(nb / 10);
		ft_varunsint_u(nb % 10);
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
