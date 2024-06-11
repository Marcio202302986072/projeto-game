#pragma once
#include "Power.hpp"

class PowerShoot : public Power {
public:
    PowerShoot();
    void Update() override;
    void Draw() override;
    void Activate() override;
    Rectangle getRect() override;
    void Spam() override;
private:
    Vector2 position;
    Texture2D texture;
};
