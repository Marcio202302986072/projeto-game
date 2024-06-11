#include "PowerMusic.hpp"
#include <raylib.h>

PowerMusic::PowerMusic() : Power() {
    image = LoadTexture("path/to/music_powerup_image.png");
    music = LoadSound("path/to/music_file.mp3");
}

PowerMusic::~PowerMusic() {
    UnloadSound(music);
}

void PowerMusic::Activate() {
    PlaySound(music);
}
