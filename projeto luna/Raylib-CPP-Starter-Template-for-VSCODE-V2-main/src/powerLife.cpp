#include "PowerLife.hpp"
#include <raylib.h>

PowerLife::PowerLife() : Power() {
    image = LoadTexture("java.png");
}

void PowerLife::Activate() {
    // Lógica para adicionar uma vida ao jogador
    // Por exemplo: jogador->AddLife();
}
