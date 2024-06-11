#include <raylib.h>
#include "game.hpp"


int main()
{
    Color grey = {29,29,27,255};
    Color yellow = {243,216,63,255};
    int windowWidth = 750;
    int windowHeight = 700;

    InitWindow(windowWidth ,windowHeight,"lunaXmang");
    
    Font font = LoadFontEx("Font/monogram.ttf",64,0,0);
    Texture2D carroImage = LoadTexture("carro.png");
    SetTargetFPS(60);

    game game;

    while(WindowShouldClose() == false){

        game.HandleInput();
        game.Update();
        BeginDrawing();
        ClearBackground(grey);
        if(game.run){
        DrawTextEx(font, "Dificuldade: Luna", {0,0},34,2,yellow);
        }else{
            DrawTextEx(font, "GAME OVER", {0,0},34,2,yellow);
        }
        float x = 50.0;
        for(int i = 0;i < game.lives; i++){
            DrawTextureV(carroImage,{275, -50}, WHITE);
            x +=100;
        }
        game.Draw();
        EndDrawing();
        
    }

    CloseWindow();
}