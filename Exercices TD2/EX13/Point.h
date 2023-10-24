#include <iostream>
using namespace std;

class Point {
    float xy[2];
    public:
    Point(float,float);
    void deplace(float , float);
    void affiche();
};
