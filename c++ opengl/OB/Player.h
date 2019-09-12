#pragma once
#include "Ball.h"
#include <vector>
class Game;
class Player
{
  public:
    void HandleInput();
    bool buildmode = false;
    Ball* selected = nullptr;
    Game* game = nullptr;
    Player(Game* game);
    int oldState = GLFW_PRESS;
};
