#pragma once
#include <raylib.h>
#include "laser.hpp"
#include <vector>

class carro{
    public:
        carro();
        ~carro();
        void Draw();
        void MovLeft();
        void MovRight();
        void MovUp();
        void MovDown();
        void FireLaser();
        Rectangle getRect();
        void Reset();
        std::vector<Laser> lasers;
    private:
        Texture2D image;
        Vector2 position;
        double lastFireTime;
};