#include <iostream>
using namespace std;
using std::string;

// EX10

class Personne {
    string nom;
    string prenom;
    string date_naissance;

    public:
    Personne (string nom, string prenom, string date_naissance) {
        this->nom = nom;
        this->prenom= prenom;
        this->date_naissance = date_naissance;
    };

    void afficher(string nom, string prenom, string date_naissance) {
        cout << "le nom complet - " << nom << " "  << prenom << endl;
        cout << "date de naissance (JJ/MM/AAAA) - " << date_naissance << endl;

    }
};

class Employe : public Personne {
    double salaire;
    public:
    Employe(string nom, string prenom, string date_naissance, double salaire) : Personne(nom,prenom,date_naissance),  salaire(salaire) {};
     void afficher(string nom, string prenom, string date_naissance, double salaire) {
        cout << "le nom complet - " << nom << " "  << prenom << endl;
        cout << "date de naissance (JJ/MM/AAAA) - " << date_naissance << endl;
        cout << "Salaire - " << salaire << endl;

    }   

};

class Chef : public Employe {
    string champ_service;
    public:
    Chef(string nom, string prenom, string date_naissance, double salaire, string champ_Service) : Employe(nom,prenom, date_naissance,salaire), champ_service(champ_service) {};
     void afficher(string nom, string prenom, string date_naissance, double salaire, string champ_service) {
        cout << "le nom complet - " << nom << " "  << prenom << endl;
        cout << "date de naissance (JJ/MM/AAAA) - " << date_naissance << endl;
        cout << "Salaire - " << salaire << endl;
        cout << "Champ Service - " <<  champ_service << endl;

    }   
};

class Directeur : public Chef {
    string societe;
    public:
    Directeur(string nom, string prenom, string date_naissance, double salaire, string champ_Servicem, string societe) : Chef(nom, prenom, date_naissance, salaire, champ_Servicem), societe(societe) {};
    void afficher(string nom, string prenom, string date_naissance, double salaire, string champ_service, string societe) {
        cout << "le nom complet - " << nom << " "  << prenom << endl;
        cout << "date de naissance (JJ/MM/AAAA) - " << date_naissance << endl;
        cout << "Salire - " << salaire << endl;
        cout << "Champ Service - " <<  champ_service << endl;
        cout << "Societe - " << societe << endl;

    }       
   

};

int main() {

    return 0;
}