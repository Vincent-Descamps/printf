# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 16:25:41 by vdescamp          #+#    #+#              #
#    Updated: 2021/11/12 14:28:12 by vdescamp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c		\
		ft_check.c 		\
		ft_varchar_c.c 	\
		ft_varstr_s.c 	\
		ft_varint_i.c 	\
		ft_varunsint_u.c\
		ft_varpercent.c \

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

OBJS = ${SRCS:.c=.o}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re : fclean all clean

.PHONY: all clean fclean re
