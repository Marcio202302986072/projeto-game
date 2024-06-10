#pragma once
#include <raylib.h>

class vilao {
    public:
        vilao(int type, Vector2 position);
        void Update();
        void Draw();
        void GetType();
        Texture2D image;
        int type;
        Vector2 position;
    private:

};