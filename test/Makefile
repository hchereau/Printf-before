NAME = run_test

### SRCS

PATH_SRCS = srcs/

MAIN_SRCS += $(PATH_SRCS)/main.test.c

vpath %.c $(PATH_OBJS)

### OBJS

PATH_OBJS = objs/
OBJS = $(patsubst %.c, $(PATH_OBJS)/%.o, $(SRCS))

### INCLUDES

INCLUDES = -I../
TEST_INCLUDES = -Iincludes/
HEADER = $(INCLUDES)/printf.test.h

### printf

PATH_PRINTF_LIB = -L../

PRINTF_LIB = ../libftprintf.a

### COMPILATION

CC = clang

CFLAGS += -Werror
CFLAGS += -Wextra
CFLAGS += -Wall
CFLAGS += -fPIE
#CFLAGS += -fsanitize=address,undefined -g3

all: ${NAME}

${NAME}: ${OBJS}
	$(CC) $(CFLAGS) $^ $(PRINTF_LIB) $(MAIN_SRCS) -lbsd -o $@ $(INCLUDES) $(TEST_INCLUDES)

${OBJS}: $(PATH_OBJS)/%.o: %.c
	mkdir -p $(PATH_OBJS)
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES) $(TEST_INCLUDES) 

clean:
	$(RM) -R $(PATH_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean
	$(MAKE)
