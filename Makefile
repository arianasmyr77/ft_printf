# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 17:15:26 by arforouz          #+#    #+#              #
#    Updated: 2022/12/05 17:08:16 by arforouz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS				= 		ft_printf.c \
							convert_char.c \
							convert_hexa.c \
							convert_ptr.c \
							convert_str.c \
							convert_unsigned.c \
							convert.c \
							ft_putnbr_fd.c 
				
OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

CC		= gcc

CFLAGS 	= -Wall -Werror -Wextra

RM		= rm -rf

all:		${NAME}

${NAME}:	${OBJS}
			ar -rsc ${NAME} ${OBJS} 

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re 