NAME = libftprintf.a

###LIBFT

LIBFT_FOLDER += libft/
LIBFT += $(LIBFT_FOLDER)/libft.a

###SRCS

PATH_SRCS += srcs/

SRCS += ft_printf.c
SRCS += utils_buffer.c
SRCS += utils.c
SRCS += utils_string.c
SRCS += utils_pointeur.c
SRCS += utils_num.c
SRCS += ft_uitoa.c
SRCS += add_to_file_string.c

vpath %.c $(PATH_SRCS)

### OBJS

PATH_OBJS = objs/

OBJS = $(patsubst %.c, ${PATH_OBJS}/%.o, ${SRCS})

### INCLUDES

INCLUDES_FT_PRINTF += includes/
INCLUDES_LIBFT += $(LIBFT_FOLDER)/includes/
INCLUDES += -I $(INCLUDES_FT_PRINTF)
INCLUDES += -I $(INCLUDES_LIBFT)

HEADER += $(INCLUDES_FT_PRINTF)/ft_printf.h

### COMPILATION

CC = clang
CFLAGS += -Werror
CFLAGS += -Wextra
CFLAGS += -Wall

ifeq (${debug}, true)
	CFLAGS += -fsanitize=address,undefined -g3
endif

AR = ar rc

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

$(OBJS): ${PATH_OBJS}/%.o: %.c $(HEADER)
	mkdir -p ${PATH_OBJS}
	${CC} ${CFLAGS} -c $< -o $@ -I $(INCLUDES_LIBFT) -I $(INCLUDES_FT_PRINTF)

$(LIBFT):
	$(MAKE) -C $(LIBFT_FOLDER)

clean:
	${RM} -R ${PATH_OBJS}
	$(MAKE) -C $(LIBFT_FOLDER) clean

fclean: clean
	${RM} ${NAME}
	$(MAKE) -C $(LIBFT_FOLDER) fclean

re: fclean
	$(MAKE)

norm:
	echo "\033[44;97;1m               \033[0m"
	echo "\033[44;97;1m  LIBFT NORM:  \033[46;97;1m  \033[0m"
	echo "\033[44;97;1m               \033[46;97;1m  \033[0m"
	echo " \033[46;97;1m                \033[0m"
	norminette libft | awk '{if ($$NF == "OK!") { print "\033[0;92m"$$0"\033[0m" } else if ($$NF == "Error!") { print "\033[41;97;5;1m"$$0"\033[0m" } else { print }}'
	echo "\n"
	echo "\033[44;97;1m                 \033[0m"
	echo "\033[44;97;1m  SOURCES NORM:  \033[46;97;1m  \033[0m"
	echo "\033[44;97;1m                 \033[46;97;1m  \033[0m"
	echo " \033[46;97;1m                  \033[0m"
	norminette srcs | awk '{if ($$NF == "OK!") { print "\033[0;92m"$$0"\033[0m" } else if ($$NF == "Error!") { print "\033[41;97;5;1m"$$0"\033[0m" } else { print }}'
	echo "\n"
	echo "\033[44;97;1m                  \033[0m"
	echo "\033[44;97;1m  INCLUDES NORM:  \033[46;97;1m  \033[0m"
	echo "\033[44;97;1m                  \033[46;97;1m  \033[0m"
	echo " \033[46;97;1m                   \033[0m"
	norminette includes | awk '{if ($$NF == "OK!") { print "\033[0;92m"$$0"\033[0m" } else if ($$NF == "Error!") { print "\033[41;97;5;1m"$$0"\033[0m" } else { print }}'

.PHONY: all clean fclean re
.SILENT: norm
