#include "laser.hpp"

Laser::Laser(Vector2 position, int speed){
    image = LoadTexture("C++.png");
    this -> position = position;
    this -> speed = speed;
    active = true;
}

void Laser::Draw(){
    if(active)
        DrawTextureV(image,position,WHITE);
}

void Laser::Update(){
    position.x -= speed;
    if(active) {
        if(position.x > GetScreenWidth() || position.x < 0){
            active = false;
        }
    }

}