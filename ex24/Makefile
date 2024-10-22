# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 11:16:03 by ddo-carm          #+#    #+#              #
#    Updated: 2024/10/17 15:58:03 by ddo-carm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = libft.a
CFLAGS = -Wall -Wextra -Werror

#Directory paths
SRCS_D = srcs
HEADERS = includes
MAIN_D = .

#Source files
SOURCES = $(SRCS_D)/ft_putchar.c \
			$(SRCS_D)/ft_putstr.c \
			$(SRCS_D)/ft_strcmp.c \
			$(SRCS_D)/ft_strlen.c \
			$(SRCS_D)/ft_swap.c

#Object files
OBJECTS = $(SOURCES:.c = .o)

#Main files
MAIN_SRC = $(MAIN_D)/main
MAIN_OBJ = $(MAIN_SRC:.c = .o)

all: $(FILE)

#compile the lib
$(FILE): $(OBJECTS)
	ar rcs $(FILE) $(OBJECTS)

#compile object files
%.o: %.c
	cc $(CFLAGS) -I $(HEADERS) -c $< -o $@

#compile main
main: $(MAIN_OBJ) $(FILE)
	cc $(CFLAGS) -I $(HEADERS) $(MAIN_OBJ) -o main $(FILE)

#Use the main to test
test: main
	./main

#remove .o
clean:
	rm -f $(OBJECTS)

#clean and remove 
fclean: clean
	rm -f $(FILE)

#remake lib
re:	fclean all

#Phony targets to avoid clashes
.PHONY: all clean fclean re main test