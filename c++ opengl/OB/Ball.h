#ifndef  BALL_H
#define BALL_H
#include "../lib/GL/glew.h"
#include "../lib/GL/wglew.h"
#include "../lib/GLFW/glfw3.h"
#include "Color.h"

class Ball
{
public:
  Ball();
  void Draw();
  void Right();
  void Left();
  void Up();
  void Down();
  void SizeDown();
  void SizeUp();
  void OnSelect();
  void OnDeselect();
  float posx = 1.0f;
  float posy = 1.0f;
  float size = 50.0f;
  Color color = Color(255.0f, 255.0f, 255.0f);

};
#endif //CLASSNAME_H
