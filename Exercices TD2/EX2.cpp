#include <iostream>
using namespace std;


// == EX 2 ==
int multiple2(int n1) {
        return n1%2;
}

int multiple3(int n1) {
        return n1%3;
}

int main() {
    int n1;
    cout << "donnez un entier : ";
    cin >> n1;

    if (multiple2(n1) == 0 && multiple3(n1) != 0) {
        cout << "il est pair" << endl;
        if (n1%6 == 0)  cout << "il est divisible par 6" ;

      
    }

    if (multiple2(n1) == 0 && multiple3(n1) == 0) {
        cout << "il est pair" << endl;
        cout << "il est multiple de 3 " << endl;
        if (n1%6 == 0)  cout << "il est divisible par 6" ;
    }

    if (multiple2(n1) != 0 && multiple3(n1) == 0 ) {
        cout << "il est multiple de 3 " << endl;

    }




    return 0;
}