#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(Line l, Line h) {
  length = l;
  height = h;
}
void Rectangle::print(){
  cout << "Lenght: " << length.lineLength() << endl;
  cout << "Height: " << height.lineLength() << endl;
}
double Rectangle::calcArea(){
  return length.lineLength() * height.lineLength();
}
