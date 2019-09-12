
#include "Player.h"
#include "Game.h"
Player::Player(Game* game)
{
  this->game = game;
}

void Player::HandleInput()
{
if(glfwGetKey(this->game->GetWindow(), GLFW_KEY_D ) == GLFW_PRESS)
  {
    if(buildmode && selected != nullptr)
    {
      selected->Right();
    }
    else
    {
      this->game->MoveLeft();
    }
  }
  if(glfwGetKey(this->game->GetWindow(), GLFW_KEY_A ) == GLFW_PRESS)
  {
    if(buildmode && selected != nullptr)
    {
      selected->Left();
    }
    else
    {
      this->game->MoveRight();
    }
  }
  if(glfwGetKey(this->game->GetWindow(), GLFW_KEY_W ) == GLFW_PRESS)
  {

    if(buildmode && selected != nullptr)
    {
      selected->Up();
    }
    else
    {
      this->game->MoveDown();
    }
  }
  if(glfwGetKey(this->game->GetWindow(), GLFW_KEY_S ) == GLFW_PRESS)
  {

    if(buildmode && selected != nullptr)
    {
      selected->Down();
    }
    else
    {
      this->game->MoveUp();
    }
  }
  if(glfwGetKey(this->game->GetWindow(), GLFW_KEY_E ) == GLFW_PRESS)
  {

    if(buildmode && selected != nullptr)
    {
      selected->SizeUp();
      //selected->color = Color(selected->color.GetR()-10, selected->color.GetG()+10, selected->color.GetB());
    }
    else
    {

    }
  }
  if(glfwGetKey(this->game->GetWindow(), GLFW_KEY_Q ) == GLFW_PRESS)
  {
    if(buildmode && selected != nullptr)
    {
      selected->SizeDown();
      //selected->color = Color(selected->color.GetR()+10, selected->color.GetG()-10, selected->color.GetB());
    }
    else
    {

    }

  }

  if(glfwGetKey(this->game->GetWindow(), GLFW_KEY_R ) == GLFW_PRESS)
  {

    if(this->buildmode)
      this->buildmode = false;
    else
      this->buildmode = true;

  }

  int newState = glfwGetKey(this->game->GetWindow(), GLFW_KEY_SPACE);
  if (newState == GLFW_PRESS && this->oldState == GLFW_RELEASE)
  {
    //std::vector<Ball*> balls = this->game->GetBalls();
    this->game->AddBall(new Ball());
    this->selected = this->game->GetBall(this->game->GetBallCount() - 1);
    std::cout << "spawned" << "\n";
  }
  this->oldState = newState;

}
