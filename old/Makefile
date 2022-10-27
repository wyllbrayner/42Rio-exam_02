SRCS	= $(wildcard src/ft_*.c)
OBJS	= $(SRCS:.c=.o)
NAME	= exam02
UTIL	= ar
OPT		= rc
SUMM	= ranlib
RM		= rm -f
FLAG	= -Wall -Wextra -Werror
COMP	= cc

all:	lib/lib$(NAME).a

lib/lib$(NAME).a:	$(OBJS)
	$(UTIL) $(OPT) lib/lib$(NAME).a $(OBJS)
	$(SUMM) lib/lib$(NAME).a

apps/$(NAME):	main.c lib/lib$(NAME).a header/ft_$(NAME).h
	$(COMP) main.c lib/lib$(NAME).a $(FLAG) -o apps/$(NAME) -lbsd -I header/

run:	apps/$(NAME)
	./apps/$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) lib/lib$(NAME).a apps/exam02

re: fclean all

list:
	ls -la

.PRONH: all $(NAME) clean fclean re list
