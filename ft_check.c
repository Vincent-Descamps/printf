/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:27:43 by vdescamp          #+#    #+#             */
/*   Updated: 2021/11/10 16:06:05 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_check(char format, va_list ap)
{
	char	c;
	char	*s;
	int		j;

	j = 0;
	if (format == 'c')
		return (va_char(va_arg(ap, int)));
	else if (format == 's')
		return (va_str(va_arg(ap, char *)));
	return (0);
}
