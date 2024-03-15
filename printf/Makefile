NAME = libftprintf.a
SRCS = ./sources/ft_printf.c \
	./sources/ft_putchar_pf.c \
	./sources/ft_puthex_pf.c \
	./sources/ft_putnbr_pf.c \
	./sources/ft_putptr_pf.c \
	./sources/ft_putstr_pf.c \
	./sources/ft_putuint_pf.c \

OBJS = $(SRCS:.c=.o)
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
