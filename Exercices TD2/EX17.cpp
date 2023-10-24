#include <iostream>
#include <string>

using namespace std;
using std::string;

int main() {
    string dateEtHeure = "010920091123";

    string jour = dateEtHeure.substr(0, 2);
    string mois = dateEtHeure.substr(2, 2);
    string annee = dateEtHeure.substr(4, 4);
    string heure = dateEtHeure.substr(8, 2);
    string minute = dateEtHeure.substr(10, 2);

    cout << "Jour: " << jour << std::endl;
    cout << "Mois: " << mois << std::endl;
    cout << "Année: " << annee << std::endl;
    cout << "Heure: " << heure << std::endl;
    cout << "Minute: " << minute << std::endl;

    return 0;
}
