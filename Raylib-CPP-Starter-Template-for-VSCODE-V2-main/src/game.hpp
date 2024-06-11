#pragma once
#include "carro.hpp"
#include "vilao.hpp"
#include "power.hpp"
#include "score.hpp"
class game {
    public:
        game();
        ~game();
        void Draw();
        void Update();
        void HandleInput();
        bool run;
        int lives;
    private:
    void DeleteInactiveLaser();
    std::vector<Vilao> CreateVilao();
    void MoveVilao();
    void VilaoTiroLaser();
    void CheckForCollisions();
    void GameOver();
    void Reset();
    void InitGame();
    carro carro;
    std::vector<Vilao> vilaos;
    int vilaoDirection;
    std::vector<Laser> vilaoLasers;
    constexpr static float vilaoLaserTiroIntevalo = 0.35;
    float timeLastVilaoTiro;
    Power power;
    float powerSpamIntervalo;
    float timeLastSpam;
    Score score;

};