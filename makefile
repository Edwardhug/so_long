NAME	= so_long
CC		= gcc
CFLAGS	= -lX11 -lXext
MLX		= mlx_linux/libmlx.a
SRCS	= ft_printf/ft_printchar.c\
ft_printf/ft_printstr.c\
ft_printf/ft_printf.c\
ft_printf/ft_printaddress.c\
ft_printf/ft_printnbr.c\
ft_printf/ft_print_unsigned.c\
ft_printf/ft_print_hexa.c\
ft_printf/ft_itoa.c\
ft_printf/ft_unsigned_itoa.c\
ft_printf/ft_itoa_x.c\
src/main.c

INCLUDES = ft_printf/ft_printf.h\
include/so_long.h
OBJS= ${SRCS:.c=.o}

all: $(NAME)

%.o : %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}


$(NAME) : $(OBJS) $(INCLUDES)
	$(CC) $(CFLAGS) $(OBJS) $(MLX) -o $(NAME)

FORCE:

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re bonus clean fclean