#include "Utils.h"

GLfloat Utils::PixelsToFloat(float screensizeFloat, float screensizePixels, float targetPixels)
{
  if(targetPixels < screensizePixels)
  {
    return -1.0f + (screensizeFloat / (screensizePixels / targetPixels));
  } 
  {
    return screensizeFloat;
  }
}
