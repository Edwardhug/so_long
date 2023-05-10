SRCS	= 	ft_free.c\
			ft_strlen_nl.c\
			parsing.c\
			ft_error.c\
			ft_error_2.c\
			ft_check_map.c\
			ft_check_map2.c\
			map.printer.c\
			map_printf_2.c\
			ft_move.c\
			ft_put_images.c\
			main.c

SRCS_D			=	src/

OBJS			=	$(SRCS:%.c=$(OBJS_D)%.o)

OBJS_B			=	$(SRCS_B:%c=$(OBJS_D)%.o)

OBJS_MAP		=	$(SRCS_MAP:%.c=$(OBJS_D)%.o)

OBJS_D			=	obj/

HEAD			=	so_long.h

HEAD_D			=	include/

NAME			=	so_long

LIBFT_D			=	Libft/

LIBFT_A			=	Libft/libft.a

LIBFT_H			=	Libft/all_libft.h

MLX_D	=	mlx_linux/

MLX_A	=	mlx_linux/libmlx.a

#==============================================================================

#============================= BASH COMMAND ===================================
CC				=	cc

GCC				=	gcc

CCFLAG			=	# -Wall -Werror -Wextra

FSA				=	-fsanitize=address -g3

RM				=	rm -f -r

MLXFLAG = -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz

MLXFLAGO = -I/usr/include -Imlx_linux -O3 -g3
#==============================================================================

#============================= MK COMMAND =====================================
$(NAME)			:	$(OBJS_D) $(OBJS) $(HEAD_D)$(HEAD)
				$(CC) $(CCFLAG) -o $(NAME) $(OBJS) $(LIBFT_A) $(MLX_A) $(MLXFLAG)

$(OBJS)			:	$(OBJS_D)%.o: $(SRCS_D)%.c $(HEAD_D)$(HEAD) $(MLX_A) $(LIBFT_A)
				$(CC) $(CCFLAG) -I$(HEAD_D) -I$(LIBFT_D) -I$(MLX_D) $(MLXFLAGO) -c $< -o $@

$(OBJS_D)		:
				mkdir -p $(OBJS_D)

$(MLX_A)		:	FORCE $(MLX_D)
				make -j -C $(MLX_D) 2>/dev/null >/dev/null

$(LIBFT_A)		:	FORCE
				make -C $(LIBFT_D)
				
FORCE			:

fsanitize		:	$(MLX_A) $(OBJS_D) $(HEAD_D)$(HEAD) $(OBJS)
				$(CC) $(CCFLAG) $(FSA) -o $(NAME) $(OBJS) $(LIBFT_A) $(MLX_A) $(MLXFLAG)

all				: $(HEAD) $(NAME)


clean			:
				$(RM) $(OBJS) $(OBJS_D)

cleanlibext		:
				make fclean -C $(LIBFT_D)
				make clean -C $(MLX_D)

fclean			:	clean cleanlibext
				$(RM) $(NAME) $(NAME_MAP)

re				:	fclean $(NAME)

refs			:	fclean fsanitize

.PHONY			:	all clean fclean re bonus refs cleanlibext fsanitize map FORCE
#==============================================================================