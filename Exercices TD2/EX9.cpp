#include <iostream>
using namespace std;
using std::string;

class Animal {
    private:
    string nom;
    int age;

    public: 
    void set_value(string nom, int age) {
        this->nom = nom;
        this->age = age;
    }
    string get_name() {
        return nom;
    }
    int get_age() {
        return age;
    }
    Animal(string nom,int age) : nom(nom),  age(age) {};
};

class Zebra : public Animal {
    string lieu;
    public:
    Zebra(string nom,int age,string lieu) : Animal(nom,age), lieu(lieu) {};
    void message() {
        cout << "\t le nom : " << get_name() << endl;
        cout << "\t l'age : " << get_age() << endl;
        cout << "\t  le lieu d'origine : " << lieu << endl;

    }
};

class Dolphin : public Animal {
    string lieu;
    public:
    Dolphin(string nom,int age,string lieu) : Animal(nom,age), lieu(lieu) {};
    void message() {
        cout << "\t le nom : " << get_name() << endl;
        cout << "\t l'age : " << get_age() << endl;
        cout << "\t  le lieu d'origine : " << lieu << endl;

    }
};

int main() {

    Zebra Zebra1("Zebra", 22, "Tanger");
    Zebra1.message();

    Dolphin Dolphin1("Dolphin", 19, "Tanger");
    Dolphin1.message();

    
    return 0;
}