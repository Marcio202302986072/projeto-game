#include "PowerShoot.hpp"

PowerShoot::PowerShoot() {
    texture = LoadTexture("path_to_power_shoot_texture.png");
    position = {0, 0};
}

void PowerShoot::Update() {
    // Lógica de atualização do power-up
}

void PowerShoot::Draw() {
    DrawTexture(texture, position.x, position.y, WHITE);
}

void PowerShoot::Activate() {
    // Lógica de ativação do power-up
}

Rectangle PowerShoot::getRect() {
    return {position.x, position.y, (float)texture.width, (float)texture.height};
}

void PowerShoot::Spam() {
    position = {(float)GetRandomValue(0, GetScreenWidth() - texture.width), 
                (float)GetRandomValue(0, GetScreenHeight() - texture.height)};
}
