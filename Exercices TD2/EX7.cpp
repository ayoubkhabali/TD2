#include <iostream>
using namespace std;

int main() {
    int tab[10];
    for (int i=0; i<10; i++) {
        cout << "Saisez la valeur n" << i+1 <<": ";
        cin >> tab[i];

    }
    int temp = tab[0];

    for (int i=0;i<9; i++) {
        for (int j=i+1; j<10;j++) {
            if (tab[i] > tab[j]) {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] =temp;
            }
        }
    }

    for (int i=0;i<10;i++)
        cout << tab[i] << " ";
    return 0;
}