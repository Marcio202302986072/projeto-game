#include <raylib.h>
#include "game.hpp"

int main()
{
    Color grey = {29,29,27,255};
    int windowWidth = 750;
    int windowHeight = 700;

    InitWindow(windowWidth,windowHeight,"lunaXmang");
    SetTargetFPS(60);

    game game;

    while(WindowShouldClose() == false){

        game.HandleInput();
        game.Update();
        BeginDrawing();
        ClearBackground(grey);
        game.Draw();
        
        EndDrawing();
    }

    CloseWindow();
}