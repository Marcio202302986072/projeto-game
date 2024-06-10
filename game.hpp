#pragma once
#include "carro.hpp"
class game {
    public:
        game();
        ~game();
        void Draw();
        void Update();
        void HandleInput();
    private:
    void DeleteInactiveLaser();
    carro carro;

};