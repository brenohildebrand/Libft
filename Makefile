# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/09 03:34:21 by bhildebr          #+#    #+#              #
#    Updated: 2023/08/09 03:45:53 by bhildebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -MMD -MP

FUNCTIONS = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint \
	ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy \
    ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp \
    ft_memchr ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup \
	ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi \
	ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd

SOURCES = $(patsubst %,%.c,$(FUNCTIONS))
OBJECTS = $(patsubst %,%.o,$(FUNCTIONS))
DEPENDS = $(patsubst %,%.d,$(FUNCTIONS))

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

-include $(DEPENDS)

clean:
	rm -f $(OBJECTS) $(DEPENDS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re