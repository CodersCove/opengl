#pragma once
#include <windows.h>
#include "../lib/GL/glew.h"
#include "../lib/GL/wglew.h"
#include "../lib/GLFW/glfw3.h"
#include <iostream>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>
#include <unistd.h>
#include "Ball.h"
#include "Utils.h"
#include "Player.h"
#include <vector>
class Player;

class Game
{
  public:
    Game();
    GLFWwindow* window;
    void Init();
    int GetBallCount();
    Ball* GetBall(int index);
    void Tick();
    bool CanExit();
    void AddPlayer(Player* player);
    std::vector<Ball*> GetBalls();
    void AddBall(Ball* ball);
    GLFWwindow* GetWindow();
    void MoveUp();
    void MoveDown();
    void MoveLeft();
    void MoveRight();

  private:
    int width = 640;
    int height = 480;
    std::vector<Ball*> balls;
    std::vector<Player*> players;
};
