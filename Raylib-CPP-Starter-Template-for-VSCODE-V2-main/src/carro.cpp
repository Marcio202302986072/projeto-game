#include "carro.hpp"

carro::carro(){
    image = LoadTexture("carro.png");
    position.x = 50;
    position.y = 250;
    lastFireTime = 0.0;

}

carro::~carro(){
    UnloadTexture(image);
}

void carro::Draw() {
    DrawTextureV(image,position,WHITE);
}

void carro::MovLeft(){
    position.x -= 3.5;
}

void carro::MovRight(){
    position.x += 3.5;
}

void carro::MovUp(){
    position.y -= 3.5;
}

void carro::MovDown(){
    position.y += 3.5;
}

void carro::FireLaser(){
    if(GetTime() - lastFireTime >= 0.35){
        lasers.push_back(Laser({position.x + image.width/2 - 2,position.y + image.height/2 + 10},-6));
        lastFireTime = GetTime();
    }
}

Rectangle carro::getRect(){
    return
     {position.x,position.y, float(image.width), float(image.height)};
}

void carro::Reset(){
    position.x = 50;
    position.y = 250;
     lasers.clear();
}