# Nombre del compilador
CC = gcc

# Directorios
INCLUDE_DIR = ../include
SRC_DIR = .
BIN_DIR = ../bin
DATA_DIR = ../data

# Archivos fuente
SRC_FILES = $(SRC_DIR)/main.c \
            $(SRC_DIR)/book_manager.c \
            $(SRC_DIR)/user_manager.c \
            $(SRC_DIR)/loan_manager.c \
            $(SRC_DIR)/report_manager.c \
            $(SRC_DIR)/database.c

# Archivos objeto
OBJ_FILES = $(SRC_FILES:.c=.o)

# Archivo ejecutable
EXEC = $(BIN_DIR)/library_app

# Flags de compilación
CFLAGS = -I$(INCLUDE_DIR)

# Regla principal
all: $(EXEC)

# Regla para compilar el ejecutable
$(EXEC): $(OBJ_FILES)
	$(CC) $(OBJ_FILES) -o $@

# Regla para compilar los archivos objeto
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regla para limpiar los archivos compilados
clean:
	rm -f *.o $(EXEC)
