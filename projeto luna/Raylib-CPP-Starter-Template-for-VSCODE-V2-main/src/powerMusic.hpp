#pragma once
#include "Power.hpp"
#include <raylib.h>

class PowerMusic : public Power {
public:
    PowerMusic();
    ~PowerMusic();
    void Activate(); // Método para ativar o efeito do power-up

private:
    Sound music; // Som a ser tocado
};
