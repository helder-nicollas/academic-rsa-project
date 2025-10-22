CC = gcc
CFLAGS = -Wall -Itypes

SRC = $(wildcard src/*.c) $(wildcard types/*.c)

OBJ = $(patsubst %.c,build/%.o,$(SRC))

EXEC = build/app

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $@

build/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf build/app