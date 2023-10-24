#include <iostream>
#include "Point.h"
using namespace std;


    Point::Point(float x, float y) {
        xy[0] = x;
        xy[1] = y;
    }

    void Point::deplace(float x, float y) {
        xy[0] += x;
        xy[1] += y;
    }
    void Point::affiche() {
        cout << "(x,y) = "<< "(" << xy[0] << "," << xy[1] << ")" << endl;
    }
