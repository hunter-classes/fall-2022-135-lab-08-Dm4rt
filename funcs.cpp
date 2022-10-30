#include <iostream>
#include "imageio.h"

void invert(std::string fileName){
  int img[MAX_H][MAX_W];
  int h, w;
  readImage(fileName, img, h,w);

  int out[MAX_H][MAX_W];
  for(int row = 0; row < h; row++){
    for(int col = 0; col < w; col++){
      out[row][col] = 255-img[row][col];
    }
  }
  writeImage("taskA.pgm",out,h,w);
}
