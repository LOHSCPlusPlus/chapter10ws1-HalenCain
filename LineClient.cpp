#include "Line.h"
#include <iostream>
using namespace std
;
int main() {
    Point start(3.2, 7.8);
    Point end(4.5, 9.3);
    Line line1(start, end);
    line1.print();
    cout << "DISTANCE: "<< endl;
    cout << line1.lineLength() << endl;
    return 0;
}
