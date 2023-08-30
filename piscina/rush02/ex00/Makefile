# Nombre del programa
NAME = <rush-02>

# Flags de compilación
FLAGS = -Wall -Werror -Wextra

# Compilador a utilizar
CC = cc

# Lista de archivos fuente
SOURCES = functions.c rush-02.c

# Generar el archivo objeto de cada archivo fuente
OBJECTS = $(SOURCES:.c=.o)

#Generar ejecutable
$(NAME):$(OBJECTS)
	$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)

#Regla para compilar archivos fuente
%.o: %.c
	$(CC) $(FLAGS) -c $(<) -o $@

#Limpiar archivos generados excepto objetos
clean:
	rm -f $(OBJECTS)

#Limpiar archivos generados incluido el ejecutable
fclean:clean
	rm -f $(NAME)
