#include "Line.h"
#include <iostream>
using namespace std;

Line::Line(Point s, Point e) {
  start = s;
  end = e;
};
void Line::print(){
  cout << "STARTING POINT: " << endl;
  start.print();
  cout << "ENDING POINT: " << endl;
  end.print();
}
double Line::lineLength(){
  double val = start.calcDistance(end);
  return val;
}