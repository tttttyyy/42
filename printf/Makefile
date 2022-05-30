# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile (1)                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tyenokya <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/25 16:31:55 by tyenokya          #+#    #+#              #
#    Updated: 2022/04/10 16:36:44 by tyenokya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
SRCS	= fs.c \
		  ft_putun.c \
		  ft_printf.c \
		  ft_putstr.c \
		  ft_putnbr.c \
		  ft_putchar.c \
		  ft_putnbr_base.c \
		  ft_putnbr_pointer.c
OBJS	= $(SRCS:.c=.o)
RM		= rm -f
LIBC	= ar -rcs
FLAGS	= -Wall -Wextra -Werror
INCS	= .

.c.o :
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I${INCS}

$(NAME): ${OBJS}
	${LIBC} $(NAME) $(OBJS)

all: $(NAME)

fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) -f $(OBJS) 

re: fclean all

.PHONY: all clean fclean re .c.o
