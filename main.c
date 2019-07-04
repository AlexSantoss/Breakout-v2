#include "functions.h"
#include "globals.h"

int running;
int main(){
    init();
    while (running) engine();
    quit();

    return 0;
}


