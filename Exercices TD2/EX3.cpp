#include <iostream>
using namespace std;

// EX3

int main() {

//  formalisme tableau 

    int tab1[10];

    for (int i=0;i<10;i++) {
        cout << " Saisez le nombre entier n" << i+1 << " : ";
        cin >> tab1[i];
    }

    int max = tab1[1];
    int min = tab1[1];

    for (int i=0;i<10;i++) {
        if (tab1[i] > max) 
        max = tab1[i];
        if (tab1[i] < min) 
        min = tab1[i];
    }
    cout << "max : " << max << endl;
    cout << "min : " << min << endl;

//  formalisme pointeur

int tab2[10];
int* ptr;
    ptr = tab2;

    int max2 = *tab2;
    int min2 = *tab2;
    for (int i=0;i<10;i++) {
        cout << " Saisez le nombre entier n" << i+1 << " : ";
        cin >> *(ptr + i);
    }
    for (int i=0;i<10;i++) {
        if (*(ptr + i) > max2) 
        max2 = *(ptr + i);
        if (*(ptr + i) < min2) 
        min2 = *(ptr + i);
    }
    cout << "max 2: " << max2 << endl;
    cout << "min 2: " << min2 << endl;

    
    return 0;
}