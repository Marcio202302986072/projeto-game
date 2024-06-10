#include "game.hpp"
#include <iostream>

game::game()
{
}

game::~game() {
}

void game::Update(){
    for(auto& laser: carro.lasers){
        laser.Update();
    }

    DeleteInactiveLaser();
}

void game::Draw(){
    carro.Draw();

    for(auto& laser: carro.lasers){
        laser.Draw();
    }
}
void game::HandleInput(){
    if(IsKeyDown(KEY_LEFT)){
        carro.MovLeft();
    }
    if(IsKeyDown(KEY_RIGHT)) {
        carro.MovRight();
    }
    if(IsKeyDown(KEY_UP)){
        carro.MovUp();
    }
    if(IsKeyDown(KEY_DOWN)){
        carro.MovDown();
    }
    if(IsKeyDown(KEY_SPACE)){
        carro.FireLaser();
    }
}

void game::DeleteInactiveLaser(){
    for(auto it = carro.lasers.begin(); it != carro.lasers.end();){
        if(!it -> active) {
            it = carro.lasers.erase(it);
        } else {
            ++ it;
        }
    }
}