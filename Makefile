# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsanabri <gsanabri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/01 11:51:04 by gsanabri          #+#    #+#              #
#    Updated: 2024/12/06 20:02:05 by gsanabri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printf.c
OBJ = $(SRC:.c=.o)

NAME = libftprintf.a 
LIBFT = -l:libft/libft.a
all: libftprintf.a libft_make

libft_make:
	make -C libft

%.o : %.c 
	$(CC) $(CFLAGS) -c $^ -o $@	

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) $(LIBFT) 

clean:
	rm -f $(OBJ) 
	make clean -C libft

fclean:  clean
	rm -f *.o $(NAME)
	make fclean -C libft
	
re: fclean all

.PHONY:  all clean fclean re