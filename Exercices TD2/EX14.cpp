#include <iostream>
using namespace std;

class Pile {
private:
    int* tableau;
    int taille;
    int sommet; 

public:
    Pile(int tailleMax) {
        taille = tailleMax;
        tableau = new int[taille];
        sommet = -1; 
    }

    ~Pile() {
        delete[] tableau;
    }

    void push(int valeur) {
        if (sommet < taille - 1) {
            tableau[++sommet] = valeur;
        } else {
            cout << "La pile est pleine. Impossible d'empiler." << endl;
        }
    }

    int pop() {
        if (sommet >= 0) {
            return tableau[sommet--];
        } else {
            cout << "La pile est vide. Impossible de dépiler." << endl;
            return -1; 
        }
    }
};

int main() {
    Pile p1(10); 
    Pile p2(5);

    p1.push(5);
    p1.push(10);
    p1.push(15);

    p2.push(20);
    p2.push(25);

    cout << "Dépilage de p1 : ";
    cout << p1.pop() << " ";
    cout << p1.pop() << " ";
    cout << p1.pop() << " ";
    cout << endl;

    cout << "Dépilage de p2 : ";
    cout << p2.pop() << " ";
    cout << p2.pop() << " ";
    cout << endl;

    return 0;
}
