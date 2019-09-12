#include "Ball.h"
#include "Utils.h"
#include <iostream>
Ball::Ball()
{

}

void Ball::Right()
{
  this->posx+=1.0f;
}

void Ball::Left()
{
  this->posx-=1.0f;
}

void Ball::SizeDown()
{
  this->size-=1.0f;
}

void Ball::SizeUp()
{
  this->size+=1.0f;
}

void Ball::Up()
{
  this->posy+=1.0f;
}

void Ball::Down()
{
  this->posy-=1.0f;
}

void Ball::Draw()
{
  glColor3f(this->color.R, this->color.G, this->color.B);
  glBegin(GL_LINES);
  glVertex2f(Utils::PixelsToFloat(2.0f, 640.0f, this->posx), Utils::PixelsToFloat(2.0f, 480.0f, this->posy));
  glVertex2f(Utils::PixelsToFloat(2.0f, 640.0f, this->posx+this->size), Utils::PixelsToFloat(2.0f, 480.0f, this->posy));
  glVertex2f(Utils::PixelsToFloat(2.0f, 640.0f, this->posx), Utils::PixelsToFloat(2.0f, 480.0f, this->posy));
  glVertex2f(Utils::PixelsToFloat(2.0f, 640.0f, this->posx), Utils::PixelsToFloat(2.0f, 480.0f, this->posy+this->size));
  glVertex2f(Utils::PixelsToFloat(2.0f, 640.0f, this->posx), Utils::PixelsToFloat(2.0f, 480.0f, this->posy+this->size));
  glVertex2f(Utils::PixelsToFloat(2.0f, 640.0f, this->posx+this->size), Utils::PixelsToFloat(2.0f, 480.0f, this->posy+this->size));
  glVertex2f(Utils::PixelsToFloat(2.0f, 640.0f, this->posx+this->size), Utils::PixelsToFloat(2.0f, 480.0f, this->posy+this->size));
  glVertex2f(Utils::PixelsToFloat(2.0f, 640.0f, this->posx+this->size), Utils::PixelsToFloat(2.0f, 480.0f, this->posy));
  glEnd();
}


void Ball::OnSelect()
{
  this->color = Color(255.0f, 0.0f, 0.0f);
}

void Ball::OnDeselect()
{
  this->color = Color(255.0f, 255.0f, 255.0f);
}
