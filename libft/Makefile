NAME = libft.a

### SRCS

PATH_SRCS = srcs/

SRCS += ft_isalpha.c
SRCS += ft_isdigit.c
SRCS += ft_isalnum.c
SRCS += ft_isascii.c
SRCS += ft_isprint.c
SRCS += ft_strlen.c
SRCS += ft_memset.c
SRCS += ft_bzero.c
SRCS += ft_memcpy.c
SRCS += ft_memmove.c
SRCS += ft_strlcpy.c
SRCS += ft_strlcat.c
SRCS += ft_toupper.c
SRCS += ft_tolower.c
SRCS += ft_strchr.c
SRCS += ft_strrchr.c
SRCS += ft_strncmp.c
SRCS += ft_memchr.c
SRCS += ft_memcmp.c
SRCS += ft_substr.c
SRCS += ft_strjoin.c
SRCS += ft_strtrim.c
SRCS += ft_strnstr.c
SRCS += ft_split.c
SRCS += ft_itoa.c
SRCS += ft_strmapi.c
SRCS += ft_striteri.c
SRCS += ft_putchar_fd.c
SRCS += ft_putstr_fd.c
SRCS += ft_putendl_fd.c
SRCS += ft_putnbr_fd.c
SRCS += ft_strdup.c
SRCS += ft_atoi.c
SRCS += ft_calloc.c
SRCS += get_next_line_bonus.c
SRCS += get_next_line_utils_bonus.c

SRCS_BONUS += ft_lstnew.c
SRCS_BONUS += ft_lstadd_front.c
SRCS_BONUS += ft_lstsize.c
SRCS_BONUS += ft_lstlast.c
SRCS_BONUS += ft_lstadd_back.c
SRCS_BONUS += ft_lstdelone.c
SRCS_BONUS += ft_lstclear.c
SRCS_BONUS += ft_lstiter.c
SRCS_BONUS += ft_lstmap.c

vpath %.c $(PATH_SRCS)

### HEADER

INCLUDES = -Iincludes/

HEADER += libft.h

vpath %.h $(PATH_HEADER)

### OBJS

PATH_OBJS = objs/
OBJS = $(patsubst %.c, $(PATH_OBJS)/%.o, $(SRCS))

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

### COMPILATION

CC = clang
CFLAGS += -Werror
CFLAGS += -Wextra
CFLAGS += -Wall

AR = ar rc

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

$(OBJS): $(SRCS)
	mkdir -p $(PATH_OBJS)
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

bonus: $(OBJS) $(OBJS_BONUS)
	$(AR) $(NAME) $(OBJS) $(OBJS_BONUS)

clean:
	$(RM) -r $(PATH_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(SRCS_BONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(OBJS_BONUS)

.PHONY: all test clean fclean re
