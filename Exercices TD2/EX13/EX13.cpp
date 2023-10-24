#include <iostream>
#include "Point.h"
using namespace std;
using std::string;

int main() {
    Point p1 = Point(3,42);

    p1.affiche();
    p1.deplace(1,2);
    p1.affiche();


    return 0;
}