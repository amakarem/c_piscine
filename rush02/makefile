CC := gcc
TARGET := rush-02
SRC_DIR := ./src/
OBJ_DIR := ./obj/
CFLAGS := -Wall -Werror -Wextra
OPTIONS := -I includes
SOURCES := $(wildcard $(SRC_DIR)/*.c)
OBJECTS := $(SOURCES:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)
all: $(TARGET)
$(OBJECTS):
    $(CC) $(OPTIONS) $(FLAGS) -c $(SOURCES)
$(TARGET): $(OBJECTS)
    $(CC) $(CFLAGS) $(OBJECTS) $(OPTIONS) -o $(TARGET)
clean:
    rm -f $(OBJECTS)
fclean:
    rm -f $(TARGET)
re: fclean all