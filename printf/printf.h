/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:13:40 by vdescamp          #+#    #+#             */
/*   Updated: 2021/11/12 16:51:06 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_check(char format, va_list ap);
int	ft_varchar_c(char c);
int	ft_varstr_s(char *str);
int	ft_varint_i(int i);
int	ft_varunsint_u(unsigned int u);
int	ft_varpercent(char c);
int	ft_varhex_x(int i);

#endif
