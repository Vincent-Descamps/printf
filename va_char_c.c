/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   va_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:43:20 by vdescamp          #+#    #+#             */
/*   Updated: 2021/11/10 16:10:01 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	va_char_c(char c)
{
	int	j;

	write(1, &c, 1);
	j++;
	return (j);
}