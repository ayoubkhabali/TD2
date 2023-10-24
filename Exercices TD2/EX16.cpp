#include <iostream>
using namespace std;

struct Element {
    int valeur;
    Element* suivant;
    
    Element(int val) : valeur(val), suivant(nullptr) {}
};

class Liste {
private:
    Element* premier;

public:
    Liste() : premier(nullptr) {}

    ~Liste() {
        while (premier != nullptr) {
            Element* temp = premier;
            premier = premier->suivant;
            delete temp;
        }
    }

    void AjouterElement(int val) {
        Element* nouvelElement = new Element(val);
        nouvelElement->suivant = premier;
        premier = nouvelElement;
    }

    void SupprimerElement() {
        if (premier != nullptr) {
            Element* temp = premier;
            premier = premier->suivant;
            delete temp;
        }
    }

    void AfficherListe() {
        Element* courant = premier;
        while (courant != nullptr) {
           cout << courant->valeur << " ";
            courant = courant->suivant;
        }
        cout << std::endl;
    }
};

int main() {
    Liste maListe;

    maListe.AjouterElement(10);
    maListe.AjouterElement(20);
    maListe.AjouterElement(30);

    maListe.AfficherListe();

    maListe.SupprimerElement();

    maListe.AfficherListe();

    return 0;
}
