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

void invertHalf(std::string fileName){
  int img[MAX_H][MAX_W];
  int h, w;
  readImage(fileName, img, h,w);
  int half=w/2;

  int out[MAX_H][MAX_W];
  for(int row = 0; row < h; row++){
    for(int col = 0; col < w; col++){
      if(col>=half){
	out[row][col] = 255-img[row][col];
      }
      else{
	out[row][col] = img[row][col];
      }
    }
  }
  writeImage("taskB.pgm",out,h,w);
}

void box(std::string fileName){
  int img[MAX_H][MAX_W];
  int h, w;
  readImage(fileName, img, h,w);
  int halfWidth=w/2;
  int halfHeight=h/2;
  int widthBoundA=halfWidth/2;
  int widthBoundB=(halfWidth/2)+halfWidth;
  int heightBoundA=halfHeight/2;
  int heightBoundB=(halfHeight/2)+halfHeight;

  int out[MAX_H][MAX_W];
  for(int row = 0; row < h; row++){
    for(int col = 0; col < w; col++){
      if(col>=widthBoundA&&col<=widthBoundB&&row>=heightBoundA&&row<=heightBoundB){
	out[row][col] =255;
      }
      else{
	out[row][col] = img[row][col];
      }
    }
  }
  writeImage("taskC.pgm",out,h,w);
  
}

void frame(std::string fileName){
  int img[MAX_H][MAX_W];
  int h, w;
  readImage(fileName, img, h,w);
  int halfWidth=w/2;
  int halfHeight=h/2;
  int widthBoundA=halfWidth/2;
  int widthBoundB=(halfWidth/2)+halfWidth;
  int heightBoundA=halfHeight/2;
  int heightBoundB=(halfHeight/2)+halfHeight;

  int out[MAX_H][MAX_W];
  for(int row = 0; row < h; row++){
    for(int col = 0; col < w; col++){
      if(((col==widthBoundA||col==widthBoundB)&&row>=heightBoundA&&row<=heightBoundB)||((row==heightBoundA||row==heightBoundB)&&col>=widthBoundA&&col<=widthBoundB)){
	out[row][col] =255;
      }
      else{
	out[row][col] = img[row][col];
      }
    }
  }
  writeImage("taskD.pgm",out,h,w);
  
}
