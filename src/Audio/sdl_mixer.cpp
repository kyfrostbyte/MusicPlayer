#include <SDL.h>
#include <SDL_mixer.h>



Mix_Music* music = Mix_LoadMUS("your_audio_file.mp3");
if (music == NULL) {
    // Handle loading error
}

Mix_PlayMusic(music, -1);  // Play the music indefinitely (-1)

// Wait for the music to finish
while (Mix_PlayingMusic()) {
    SDL_Delay(100);
}

Mix_FreeMusic(music);  // Free the loaded music
