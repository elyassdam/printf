# Nombre de la biblioteca
NAME = libftprintf.a

# Compilador y banderas
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

# Archivos fuente y objeto
SRC = ft_printf.c ft_putchar.c ft_putnbr.c ft_putnbru.c ft_putstr.c ft_putnbr_base.c  ft_ptr.c ft_converter.c
OBJ = $(SRC:.c=.o)

# Regla por defecto
all: $(NAME)

# Compilación de la biblioteca
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

# Compilación de archivos .c a .o
%.o: %.c libftprintf.h
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar archivos objeto
clean:
	$(RM) $(OBJ)

# Limpiar todo (objetos y la biblioteca)
fclean: clean
	$(RM) $(NAME)

# Recompilar desde cero
re: fclean all

# No interpreta archivos como nombres de reglas
.PHONY: all clean fclean re
