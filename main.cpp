#include <iostream>
#include "YourMusicPlayerClass.h"  // Include the header file for your music player class

int main() {
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) < 0) {
        // Handle initialization error
    }

    if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
        // Handle initialization error
    }


    return 0;
}
