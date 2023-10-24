#include <iostream>
using namespace std;

// EX5

int main() {
    int a = 5;
    int& ref_a = a;
    int* p_a = &a;

    cout << "Valeur de a : " << a << endl;
    cout << "Adresse de a : " << &a << endl;
    
    cout << "Valeur de ref_a : " << ref_a << endl;
    cout << "Adresse de ref_a : " << &ref_a << endl;
    
    cout << "Valeur pointée par p_a : " << *p_a << endl;
    cout << "Adresse stockée dans p_a : " << p_a << endl;


    
    return 0;
}