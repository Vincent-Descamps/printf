/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:24:42 by vdescamp          #+#    #+#             */
/*   Updated: 2021/11/12 17:05:05 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		j;
	va_list	ap;

	i = 0;
	j = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			j++;
		}
		if (format[i] == '%')
		{
			i++;
			j += ft_check(format[i], ap);
		}
		i++;
	}
	va_end(ap);
	return (j);
}

int	main(void)
{
	ft_printf("******************\n");
	ft_printf("resultat :\n-char: %c\n -unsigned int: %u\n  -int: %i\n -hexa: %x\n -percent: %%\n", 'c', 4294967295, 15, 1457);
	ft_printf("******************\n");
	printf("resultat :\n-char: %c\n -unsigned int: %u\n  -int: %i\n -hexa: %x\n -percent: %%\n", 'c', 4294967295, 15, 1457);
	return (0);
}
