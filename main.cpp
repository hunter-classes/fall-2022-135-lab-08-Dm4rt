#include <iostream>
#include "imageio.h"
#include "funcs.h"

int main(){
  invert("image1.pgm");
  invertHalf("image2.pgm");
  box("image1.pgm");
  frame("image2.pgm");
  scale("cat.pgm");
  pixelate("image1.pgm");
}
