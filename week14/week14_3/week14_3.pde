PImage img;
void setup(){
  size(600,600);
  img=loadImage("cat.jpg");
}//可以用任何你想要的圖
void draw(){//畫圖,每秒
  image(img,mouseX,mouseY);
}
