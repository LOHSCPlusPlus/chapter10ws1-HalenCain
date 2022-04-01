#include "Rectangle.h"
#include <iostream>
using namespace std;

int main() {
    Point start1(3.2, 7.8);
    Point end1(4.5, 9.3);
    Line h(start1, end1);
    Point start2(2.2, 2.5);
    Point end2(4.5, 10.2);
    Line l(start2, end2);
    Rectangle rectangle(l, h);
    rectangle.print();
    cout << "Area: " << rectangle.calcArea();
    cout << endl;
    return 0;
}
