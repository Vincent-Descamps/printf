/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:24:42 by vdescamp          #+#    #+#             */
/*   Updated: 2021/11/08 17:38:55 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_check(const char *format, char f)
{
	va_list	ap;
	char	c;
	char	*s;
	int		i;

	while (format)
	{
		if (f == 'c')
		{
			c = va_arg(ap, int);
			printf("impression d'un character");
		}
		if (f == 's')
		{
			s = va_arg(ap, char *);
			printf("une string");
		}
		if (f == 'i')
		{
			i = va_arg(ap, int);
			printf("vous voulez un int");
		}
	}
}

int	ft_printf(const char *format, ...)
{
	char	*str;
	int		len_format;
	int		i;
	va_list	ap;

	i = 0;
	len_format = ft_strlen(format);
	va_start(ap, format);
	while (i <= len_format)
	{
		while (format[i] != '%')
			i++;
		if (format[i] == '%')
			ft_check(format, format[i + 1]);
	}
	va_end(ap);
}

int	main(void)
{
	ft_printf("bla%sbla", "Blabla");
	return (0);
}

//Fonctions peut etre a rajouter pour la suite.
/*
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10)
	{
		nb = nb % 10;
		nb = nb + 48;
		ft_putchar(nb);
	}
}
*/
