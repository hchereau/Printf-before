NAME = libprintf.a

###SRCS

### OBJS

PATH_OBJS = objs/

OBJS = $(patsubst %.c, ${PATH_OBJS}/%.o, ${SRCS})

### TESTS

TEST_FOLDER = test/
RUN_TESTS = $(TEST_FOLDER)/run_test

### COMPILATION

CC = clang
CFLAGS += -Werror
CFLAGS += -Wextra
CFLAGS += -Wall
#CFLAGS += -lbsd

ifeq (${debug}, true)
	CFLAGS += -fsanitize=address,undefined -g3
endif

AR = ar rc

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJS): ${PATH_OBJS}/%.o: %.c
	mkdir -p ${PATH_OBJS}
	${CC} ${CFLAGS} -c $< -o $@

test: $(NAME)
	$(MAKE) -sC $(TEST_FOLDER)
	echo -n "\n<------TESTS------>\n\n\n"
	./$(RUN_TESTS)

clean:
	${RM} -R ${PATH_OBJS}
	$(MAKE) -C $(TEST_FOLDER) clean

fclean: clean
	${RM} ${NAME}
	$(MAKE) -C $(TEST_FOLDER) fclean

re: fclean
	$(MAKE)

.PHONY: all test clean fclean re
.SILENT: test
