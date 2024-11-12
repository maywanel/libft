CC			=	cc
FLAGS		=	-Wall -Werror -Wextra -I libft.h
AR			=	ar rcs
RM			=	rm -rf
FILEs		=	${wildcard *.c}
FILES		=	$(filter-out main.c, $(FILEs))
OBJ			=	$(FILES:.c=.o)
NAME		=	libft.a
LIB			=	libft.h

GREEN		=	\e[38;5;118m
YELLOW		=	\e[38;5;226m
RESET		=	\e[0m
BLUE		=	\033[1;34m
_SUCCESS	=	[$(GREEN)SUCCESS$(RESET)]
_INFO		=	[$(YELLOW)INFO$(RESET)]

all: $(NAME)

$(NAME): $(LIB) $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@printf "$(_SUCCESS) libft ready\n"

%.o: %.c libft.h
	@$(CC) $(FLAGS) -c $< -o $@

test: $(NAME)
	@$(CC) $(FLAGS) main.c $(NAME) -o main
run: test
	@./main && rm main

clean:
	@$(RM) $(OBJ) $(BOBJ)
	@printf "$(_INFO) $(BLUE)object files cleaned$(RESET)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(_INFO) $(BLUE)archive file is cleaned$(RESET)\n"

re: fclean all

.PHONY: re clean fclean bonus all
.SECONDARY: $(OBJ)
