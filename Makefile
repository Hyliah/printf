NAME = libftprintf.a

# LIBFTDIR = ./libft
# LIBFT = $(LIBFTDIR)/libft.a
CFLAGS= -Wall -Werror -Wextra -I /include

SRCS= ft_printf.c  functions_count.c  handle_format_cspdi.c

OBJDIR= ./obj/

OBJS = ${SRCS:%.c=${OBJDIR}%.o}
# LIBFT_OBJS = $(wildcard $(OBJDIR)/*.o)

all: $(LIBFT) $(NAME)

# $(LIBFT):
# 	@$(MAKE) -C $(LIBFTDIR)

${OBJDIR}%.o: %.c
	@mkdir -p ${OBJDIR}
	@printf "Compiling %s\n" $<
	@gcc -c $(CFLAGS) $< -o $@

$(NAME): $(OBJS)
	@printf "Compiled library\n"
	@ar -rcs $(NAME) $(OBJS) $(LIBFT_OBJS)

re: fclean all

clean:
	@echo Cleaning out those old .o
	@rm -f $(OBJS)

fclean: clean
	@echo Cleaning out that old $(NAME)
	@rm -f $(NAME)

so:
	gcc -nostartfiles -fPIC $(CFLAGS) -c $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

.PHONY: clean fclean re all