#include <iostream>
using namespace std;

class n_complexes {
    public:
       double n_reele1;
       double n_imaginaire1;
       double n_reele2;
       double n_imaginaire2;
       char operateur;

};


int main() {
    int choix;
    n_complexes n_complexes1;
    cout << "\t Saisez le nombre reele 1 : ";
    cin >> n_complexes1.n_reele1;
    cout << "\t Saisez le nombre imaginaire 1 : ";
    cin >> n_complexes1.n_imaginaire1;
    if (n_complexes1.n_imaginaire1 > 0)
    cout << "le 1er nombre complexe est : " << n_complexes1.n_reele1 << " + " << n_complexes1.n_imaginaire1 << "i" << endl;
    if (n_complexes1.n_imaginaire1 < 0)
     cout << "le 1er nombre complexe est : " << n_complexes1.n_reele1 << " " << n_complexes1.n_imaginaire1 << "i" << endl;
   
    cout << "\t Saisez le nombre reele 2 : ";
    cin >> n_complexes1.n_reele2;
    cout << "\t Saisez le nombre imaginaire 2 : ";
    cin >> n_complexes1.n_imaginaire2;
    if (n_complexes1.n_imaginaire2 > 0)
    cout << "le 2eme nombre complexe est : " << n_complexes1.n_reele2 << " + " << n_complexes1.n_imaginaire2 << "i" << endl;
    if (n_complexes1.n_imaginaire2 < 0)
     cout << "le 2eme nombre complexe est : " << n_complexes1.n_reele2 << " " << n_complexes1.n_imaginaire2 << "i" << endl;
   

    cout << "\t tapez le nombre de la choix de l'operation : " << endl;
    cout << "\t\t 1.egalite (=)" << endl;
    cout << "\t\t 2.addition (+)" << endl;
    cout << "\t\t 3.soustraction (-)" << endl;
    cout << "\t\t 4.multiplication (*)" << endl;
    cout << "\t\t 5.division (/)" << endl;
    cout << "\t votre choix : ";
    cin >> choix;  

    
    return 0;
}