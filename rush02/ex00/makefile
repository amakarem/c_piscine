CC = cc
TARGET = rush-02
SRC_DIR = sources
CFLAGS = -Wall -Werror -Wextra
SOURCES = $(wildcard $(SRC_DIR)/*.c)

all: $(TARGET)

$(TARGET):
	@$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)

fclean:
	rm -f $(TARGET)

re: fclean all

PHONY: all fclean
