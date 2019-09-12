#include "Color.h"

Color::Color(double R, double G, double B)
{
  this->R = R / 255.0f;
  this->G = G / 255.0f;
  this->B = B / 255.0f;
}

double Color::GetR()
{
  return this->R * 255.0f;
}

double Color::GetG()
{
  return this->G * 255.0f;
}

double Color::GetB()
{
  return this->B * 255.0f;
}
