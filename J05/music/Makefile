NAME = music

SRC = main.c album_list.c parser.c sort_album.c
OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
    $(CC) $(OBJ) -o $(NAME)

clean:
    del /Q *.o 2>nul || true

fclean: clean
    del /Q $(NAME).exe 2>nul || true

run: all
    ./$(NAME).exe test.txt artist
