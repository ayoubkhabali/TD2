#include <iostream>
#include <math.h>
using namespace std;

// EX4


int main() {
    int taille;
    int* ptr1;

    cout << "Saisez la taille de tableau : " ;
    cin >> taille;

    ptr1 = new int[taille];

// Q1
    for (int i=0; i<taille; i++) {
        cout << "Saisez l'entier numero" << i+1 << " : ";
        cin >> ptr1[i];
    }

// Q2

    int* ptr2;
    ptr2 = new int[taille];
    for (int i=0; i<taille; i++) {
        ptr2[i] = pow(*(ptr1+i), 2);
    }

// Q3

    delete [] ptr1;

    for (int i=0;i<taille;i++) {
        cout << *(ptr2 + i) << " ";
    }

    delete [] ptr2;
    
    return 0;
}