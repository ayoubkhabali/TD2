#include <iostream>
#include <cstring>

using namespace std;

class Fichier {
private:
    char* pointeur;
    size_t longueur;

public:
    Fichier(size_t taille) {
        pointeur = new char[taille];
        longueur = taille;
    }

    ~Fichier() {
        delete[] pointeur;
    }

    void Creation(size_t taille) {
        pointeur = new char[taille];
        longueur = taille;
    }

    void Remplit() {
        for (size_t i = 0; i < longueur; ++i) {
            pointeur[i] = 'A' + (i % 26);
        }
    }

    void Affiche() {
        if (pointeur != nullptr) {
            for (size_t i = 0; i < longueur; ++i) {
                cout << pointeur[i];
            }
            cout << std::endl;
        } else {
            cout << "Le pointeur est nul. Aucune donnée à afficher." << std::endl;
        }
    }
};

int main() {
    Fichier* monFichier = new Fichier(100);

    monFichier->Remplit();
    monFichier->Affiche();

    delete monFichier;

    return 0;
}
