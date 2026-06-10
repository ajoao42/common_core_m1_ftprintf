# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajoao <ajoao@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/07 16:21:52 by ajoao             #+#    #+#              #
#    Updated: 2026/06/09 21:28:05 by ajoao            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFTNAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
LIBFTDIR = ./libft

SRCS = ft_printf.c \
		ft_print_chr.c \
		ft_print_str.c \
		ft_print_hex.c \
		ft_print_undec.c \
		ft_print_int.c \
		ft_print_ptr.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

makelibft:
	@make -C $(LIBFTDIR)
	@cp	$(LIBFTDIR)/$(LIBFTNAME) .
	@mv $(LIBFTNAME) $(NAME)
	
$(NAME): makelibft $(OBJS)
	@ar -r $(NAME) $(OBJS)

fclean:
	@rm -f $(NAME)
	@cd $(LIBFTDIR) && make fclean

re: fclean all
