#include <iostream>
#include <math.h>
using namespace std;

class vecteur3d {
    float v3d[3];
    public: 
    vecteur3d(float x=0, float y=0, float z=0) {
        v3d[0]= x;
        v3d[1] = y;
        v3d[2] = z;
    };
    void f_affichage() {
        cout << "(" << v3d[0] << "," << v3d[1] << "," << v3d[2] << ")";
    };
    vecteur3d f_somme(const vecteur3d& other) {
         return vecteur3d(v3d[0] + other.v3d[0], v3d[1] + other.v3d[1], v3d[2] + other.v3d[2]);
    };
    float f_produit(const vecteur3d& other) {
        return v3d[0] * other.v3d[0] + v3d[1] * other.v3d[1] + v3d[2] * other.v3d[2];
    };
    bool f_coincide(const vecteur3d& other) {
        for (int i=0;i<3;i++) {
            if (v3d[i] != other.v3d[i])
            return false;

        }
        return true;
    }
    float f_norme() {
        return  sqrt( pow(v3d[0], 2) + pow(v3d[1], 2) + pow(v3d[2], 2) );
    }


};

int main() {
    vecteur3d v3D = vecteur3d(3,3,4);
    v3D.f_affichage();
    return 0;
}