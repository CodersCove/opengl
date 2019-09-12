#include "Game.h"



Game::Game()
{
  Init();
}

void Game::Init()
{
  /* Initialize the library */
  if (!glfwInit())
  std::cout << "false";


  this->window = glfwCreateWindow(this->width, this->height, "Hello World", NULL, NULL);
  if (!this->window)
  {
      glfwTerminate();

  }

  /* Make the window's context current */
  glfwMakeContextCurrent(this->window);
  /* Create a windowed mode window and its OpenGL context */
  glewExperimental = GL_TRUE;
  GLenum err = glewInit();
  if(GLEW_OK == err)
  {
    std::cout << err;
  }
  else
  {
    std::cout << "fk";
  }
  glfwSetInputMode(this->window, GLFW_STICKY_KEYS, GL_TRUE);
}


void Game::Tick()
{
  glClear( GL_COLOR_BUFFER_BIT );
  for(int i = 0;i < this->balls.size() || i < this->players.size();i++ )
  {
    if(i < this->players.size())
    {
      this->players[i]->HandleInput();
    }

    if(i < this->balls.size())
    {
      this->balls[i]->Draw();
    }
  }
  glfwSwapBuffers(this->window);
  glfwPollEvents();
  Sleep((1000/60));


}

Ball* Game::GetBall(int index)
{
  return this->balls[index];
}

int Game::GetBallCount()
{
  return this->balls.size();
}

void Game::AddPlayer(Player* player)
{
  this->players.push_back(player);
}

bool Game::CanExit()
{
  return glfwGetKey(window, GLFW_KEY_ESCAPE ) != GLFW_PRESS &&
         glfwWindowShouldClose(window) == 0;
}

void Game::MoveUp()
{
  for(int i = 0;i < balls.size();i++)
  balls[i]->Up();
}

void Game::MoveDown()
{
  for(int i = 0;i < balls.size();i++)
  balls[i]->Down();
}

void Game::MoveLeft()
{
  for(int i = 0;i < balls.size();i++)
  balls[i]->Left();
}

void Game::MoveRight()
{
  for(int i = 0;i < balls.size();i++)
  balls[i]->Right();
}

std::vector<Ball*> Game::GetBalls()
{
  return this->balls;
}

void Game::AddBall(Ball* ball)
{
  this->balls.push_back(ball);
}

GLFWwindow* Game::GetWindow()
{
  return this->window;
}
