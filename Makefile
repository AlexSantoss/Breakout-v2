SDL_PATH=-I/usr/include/SDL2
SDL_FLAGS=-lSDL2 -lSDL2_image
CFLAGS=-W -Wall -ansi -pedantic -D_REENTRANT
DEFS=-Idefs

sources = objects/quit.o objects/init.o objects/running.o

all: game
game: objects/main.o $(sources)
	gcc -o game objects/main.o $(sources) $(SDL_FLAGS)

objects/main.o: main.c
	mkdir -p objects
	gcc -c $(CFLAGS) $(DEFS) main.c -o objects/main.o

$(sources): objects/%.o: source/%.c
	mkdir -p objects
	gcc -c $(CFLAGS) $(SDL_PATH) $(DEFS) $< -o $@

clear:
	rm -rf objects
	rm -rf game
