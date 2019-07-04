#include "SDL.h"
#include "functions.h"
#include "globals.h"

void init(){
    if(createWindow()) return;
    running = 1;
}

int createWindow(){
    SDL_Window *window;
    SDL_Init(SDL_INIT_VIDEO);

    window = SDL_CreateWindow("Breakout", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_OPENGL);

    if (window == NULL) {
        printf("Could not create window: %s\n", SDL_GetError());
        return 1;
    }
    return 0;
}
