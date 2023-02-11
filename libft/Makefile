# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchereau <hchereau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/11 19:35:48 by hchereau          #+#    #+#              #
#    Updated: 2023/02/11 19:41:23 by hchereau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft
LIBRARY := ${addsuffix .a, ${NAME}}

PATH_SRCS += srcs

FILES += ft_isalpha
FILES += ft_isdigit
FILES += ft_isalnum
FILES += ft_isascii
FILES += ft_isprint
FILES += ft_strlen
FILES += ft_memset
FILES += ft_bzero
FILES += ft_memcpy
FILES += ft_memmove
FILES += ft_strlcpy
FILES += ft_strlcat
FILES += ft_toupper
FILES += ft_tolower
FILES += ft_strchr
FILES += ft_strrchr
FILES += ft_strncmp
FILES += ft_memchr
FILES += ft_memcmp
FILES += ft_substr
FILES += ft_strjoin
FILES += ft_strtrim
FILES += ft_strnstr
FILES += ft_split
FILES += ft_itoa
FILES += ft_strmapi
FILES += ft_striteri
FILES += ft_putchar_fd
FILES += ft_putstr_fd
FILES += ft_putendl_fd
FILES += ft_putnbr_fd
FILES += ft_strdup
FILES += ft_atoi
FILES += ft_calloc
FILES += get_next_line
FILES += get_next_line_utils

FILES += ft_lstnew
FILES += ft_lstadd_front
FILES += ft_lstsize
FILES += ft_lstlast
FILES += ft_lstadd_back
FILES += ft_lstdelone
FILES += ft_lstclear
FILES += ft_lstiter
FILES += ft_lstmap

SRCS := ${addsuffix .c, ${FILES}}

INCLUDES := includes
HEADER := includes/libft.h

vpath %.c ${PATH_SRCS}

PATH_OBJS := objs
OBJS := ${patsubst %.c, ${PATH_OBJS}/%.o, ${SRCS}}

AR := ar rcs
CC := cc
CFLAGS := -Wall -Wextra -Werror

all: ${LIBRARY}

${LIBRARY}: ${OBJS}
	${AR} ${LIBRARY} $^

${OBJS}: ${PATH_OBJS}/%.o: %.c ${HEADER}
	@mkdir -p ${PATH_OBJS}
	${CC} ${CFLAGS} -fPIC -c $< -o $@ -I${INCLUDES}

clean:
	rm -rf ${PATH_OBJS}

fclean: clean
	rm -f ${LIBRARY}

re: fclean ${LIBRARY}

.PHONY: all clean fclean re