#include "SDL.h"
#include "functions.h"
#include "globals.h"

void engine(){
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) running = 0;
    }
    SDL_Delay(1000/60);
}
