#include<iostream>
#include<cstdlib>
using std::cin;
using std::cout;
using std::endl;
class Screen {
    int width{640};
    int height{480};

    void printInfo();
    void exitScr();
    bool isSideValid(int side);
    void exitWhenInvalidScreen(int side);
    void exitWhenInvalidScreen(int width, int height);
public:
    Screen();
    Screen(int width_, int height_);
    int getWidth();
    int getHeight();
    int setWidth(int width);    //return width
    int setHeight(int height);  //return height
};
Screen::Screen(){
    printInfo();
}
Screen::Screen(int width_, int height_){
    exitWhenInvalidScreen(width_, height_);
    width=width_;
    height=height_;
    printInfo();
}
bool Screen::isSideValid(int side){
    return side > 0 && side <= 1000;
}
void Screen::exitScr(void){
    cout << "invalid screen size";
    exit(0);
}
void Screen::exitWhenInvalidScreen(int side){
    if (! isSideValid(side)) {
        exitScr();
    }
}
void Screen::exitWhenInvalidScreen(int width, int height){
    if (! isSideValid(width) || ! isSideValid(height)) {
        exitScr();
    }
}
void Screen::printInfo() {
    cout << "screen" << endl;
}
int Screen::getWidth(){
    return width;
}
int Screen::getHeight(){
    return height;
}
int Screen::setWidth(int width){    //return width
    exitWhenInvalidScreen(width);
    this->width = width;
    return width;
}
int Screen::setHeight(int height){  //return height
    exitWhenInvalidScreen(height);
    this->height = height;
    return height;
}

int main() {
  int width, height;
  std::cin >> width >> height;
  Screen screen1 (width, height);
  Screen screen2;
   
  screen2.setWidth(800);
  screen2.setHeight(600);
   
  // 下面两行代码所输出的宽和高之间有一个空格字符分隔
  std::cout << screen1.getWidth() << ' ' << screen1.getHeight() << std::endl;
  std::cout << screen2.getWidth() << ' ' << screen2.getHeight();
 
  return 0;
}
